#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1306014901;
unsigned char var_2 = (unsigned char)222;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 14448538247087910210ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_11 = -2056924930;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)(-127 - 1);
unsigned long long int var_14 = 2190411187278206399ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
