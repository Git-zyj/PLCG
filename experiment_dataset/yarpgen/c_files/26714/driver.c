#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
short var_2 = (short)-19473;
signed char var_14 = (signed char)22;
int zero = 0;
signed char var_18 = (signed char)-124;
unsigned short var_19 = (unsigned short)4295;
short var_20 = (short)-9913;
unsigned short var_21 = (unsigned short)21054;
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
