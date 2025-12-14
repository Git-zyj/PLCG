#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8132913510881009834ULL;
short var_1 = (short)21035;
_Bool var_2 = (_Bool)0;
long long int var_5 = 6252827978360951610LL;
unsigned int var_6 = 914410110U;
short var_7 = (short)-32180;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3762946293U;
int var_10 = -31679916;
int var_11 = -1317386101;
int zero = 0;
unsigned short var_12 = (unsigned short)30359;
signed char var_13 = (signed char)34;
unsigned int var_14 = 344072779U;
int var_15 = 1879451303;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
