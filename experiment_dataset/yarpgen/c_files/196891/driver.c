#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1644635032U;
int var_3 = 1579903592;
unsigned int var_5 = 1139771080U;
unsigned int var_6 = 241440453U;
signed char var_8 = (signed char)-81;
long long int var_9 = 9006733117521275889LL;
unsigned int var_10 = 433875376U;
long long int var_11 = -5574426207584856996LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)69;
unsigned long long int var_14 = 7466979663409226632ULL;
unsigned long long int var_15 = 707247746838344994ULL;
long long int var_16 = -1811181203482108755LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
