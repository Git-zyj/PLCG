#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20407;
signed char var_1 = (signed char)115;
short var_2 = (short)-12280;
unsigned int var_4 = 792269683U;
long long int var_14 = 4930011937316684466LL;
long long int var_15 = -7488246523602081171LL;
int zero = 0;
unsigned int var_16 = 4239396280U;
unsigned short var_17 = (unsigned short)53271;
unsigned int var_18 = 836498252U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
