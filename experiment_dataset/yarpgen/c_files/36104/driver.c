#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 173116872;
unsigned int var_1 = 2990876227U;
long long int var_5 = 5337028353222674645LL;
short var_7 = (short)-8993;
unsigned long long int var_8 = 15824233915580037506ULL;
unsigned long long int var_11 = 5323939902683388366ULL;
unsigned int var_14 = 2831942533U;
unsigned long long int var_16 = 2618113503358776295ULL;
int zero = 0;
unsigned int var_18 = 1967393860U;
unsigned short var_19 = (unsigned short)2372;
void init() {
}

void checksum() {
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
