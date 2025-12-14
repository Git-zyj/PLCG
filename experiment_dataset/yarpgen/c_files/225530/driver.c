#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-125;
unsigned char var_4 = (unsigned char)41;
unsigned short var_5 = (unsigned short)17997;
signed char var_7 = (signed char)-67;
unsigned long long int var_11 = 7079608905492239175ULL;
int zero = 0;
short var_13 = (short)-29962;
unsigned char var_14 = (unsigned char)151;
unsigned int var_15 = 2016773111U;
unsigned long long int var_16 = 7648086158554900381ULL;
unsigned char var_17 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
