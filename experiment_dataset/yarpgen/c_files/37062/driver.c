#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)19045;
int zero = 0;
unsigned char var_13 = (unsigned char)20;
signed char var_14 = (signed char)1;
short var_15 = (short)17661;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
