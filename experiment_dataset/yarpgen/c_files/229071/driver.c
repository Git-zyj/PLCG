#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42977;
unsigned int var_3 = 2871724570U;
unsigned int var_8 = 790720064U;
unsigned long long int var_9 = 17224315505889494363ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)70;
unsigned short var_17 = (unsigned short)44036;
short var_18 = (short)17022;
signed char var_19 = (signed char)47;
unsigned short var_20 = (unsigned short)731;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
