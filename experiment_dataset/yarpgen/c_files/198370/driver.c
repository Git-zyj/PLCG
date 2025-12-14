#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 949659897U;
unsigned long long int var_3 = 2984695077125633266ULL;
unsigned long long int var_5 = 13563802375461526792ULL;
short var_6 = (short)-25963;
short var_10 = (short)-15318;
long long int var_14 = 8376610263005984638LL;
int zero = 0;
unsigned short var_15 = (unsigned short)39848;
unsigned int var_16 = 1245144440U;
unsigned short var_17 = (unsigned short)63893;
int var_18 = -546966383;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
