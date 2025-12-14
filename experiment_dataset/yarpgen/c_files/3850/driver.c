#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -38364853;
long long int var_2 = 8182440027196938320LL;
unsigned long long int var_8 = 4525398003154760776ULL;
unsigned int var_10 = 3157858490U;
unsigned short var_11 = (unsigned short)24517;
unsigned long long int var_13 = 12355133530147480879ULL;
unsigned int var_14 = 3760526866U;
int zero = 0;
unsigned long long int var_15 = 13409221894240385955ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-30892;
short var_18 = (short)5210;
unsigned int var_19 = 931437222U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
