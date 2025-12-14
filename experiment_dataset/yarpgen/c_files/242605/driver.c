#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-23580;
int var_11 = -1582594421;
int var_15 = -184173850;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 737501782U;
signed char var_19 = (signed char)44;
unsigned char var_20 = (unsigned char)239;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
