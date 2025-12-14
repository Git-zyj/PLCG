#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
short var_2 = (short)-29152;
unsigned char var_3 = (unsigned char)105;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)60;
signed char var_10 = (signed char)3;
int zero = 0;
unsigned char var_15 = (unsigned char)223;
int var_16 = -1982113459;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
