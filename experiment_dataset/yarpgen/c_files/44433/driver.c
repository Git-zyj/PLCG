#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 66266097838995694ULL;
unsigned long long int var_1 = 6651341678174532003ULL;
_Bool var_3 = (_Bool)1;
int var_5 = 1718267791;
signed char var_6 = (signed char)49;
long long int var_8 = -7080565491971149316LL;
long long int var_9 = 2775557073154471403LL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1881352019U;
int zero = 0;
short var_12 = (short)2045;
short var_13 = (short)6200;
_Bool var_14 = (_Bool)0;
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
