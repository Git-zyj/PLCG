#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4211770668U;
unsigned int var_5 = 1397385325U;
_Bool var_7 = (_Bool)1;
short var_9 = (short)18284;
unsigned char var_11 = (unsigned char)7;
unsigned char var_16 = (unsigned char)122;
int zero = 0;
unsigned int var_17 = 2825166847U;
short var_18 = (short)22329;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
