#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)-12226;
signed char var_5 = (signed char)69;
unsigned char var_6 = (unsigned char)199;
unsigned char var_7 = (unsigned char)51;
short var_17 = (short)-29195;
int zero = 0;
long long int var_19 = -3807125440287632991LL;
signed char var_20 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
