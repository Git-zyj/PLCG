#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16218365420069901663ULL;
int var_2 = -1451900700;
int var_3 = -1722144062;
int var_4 = -820053533;
long long int var_5 = -1232493639844241245LL;
signed char var_7 = (signed char)-23;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 9663742978351176946ULL;
unsigned int var_12 = 4081687653U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8601375238047846667ULL;
long long int var_17 = -8556713955395310354LL;
unsigned int var_18 = 273073254U;
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
