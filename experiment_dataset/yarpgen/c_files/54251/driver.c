#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
int var_1 = 2139420288;
int var_2 = 1571250561;
signed char var_3 = (signed char)-95;
unsigned int var_5 = 4220583334U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 211174868U;
int var_10 = -1930417778;
short var_14 = (short)-32655;
int var_15 = 656819658;
unsigned int var_17 = 874874856U;
short var_19 = (short)-3721;
int zero = 0;
short var_20 = (short)3807;
int var_21 = -444798612;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
