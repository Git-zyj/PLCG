#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38546;
long long int var_1 = 6621640188951581779LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)4054;
unsigned short var_6 = (unsigned short)12900;
unsigned long long int var_7 = 14931856402946015659ULL;
unsigned int var_8 = 228158494U;
int var_9 = -1481077939;
int zero = 0;
short var_11 = (short)-22372;
long long int var_12 = 5432860726566712800LL;
unsigned int var_13 = 1552408916U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
