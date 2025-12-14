#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30015;
short var_3 = (short)-15164;
unsigned short var_6 = (unsigned short)53799;
unsigned long long int var_8 = 10184623400608418811ULL;
unsigned int var_9 = 948889683U;
int var_11 = -360209574;
signed char var_12 = (signed char)23;
short var_14 = (short)-25274;
unsigned int var_15 = 1060814243U;
int zero = 0;
short var_20 = (short)-12883;
unsigned int var_21 = 1345497580U;
int var_22 = 1941648330;
unsigned short var_23 = (unsigned short)45358;
long long int var_24 = 3621461611302535067LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
