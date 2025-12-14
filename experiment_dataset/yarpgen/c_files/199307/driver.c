#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4022855740504300983LL;
int var_1 = 1079480716;
unsigned short var_2 = (unsigned short)60169;
unsigned long long int var_6 = 4888571221405847717ULL;
unsigned int var_7 = 2319403487U;
int var_8 = -1310433914;
unsigned short var_9 = (unsigned short)17674;
unsigned int var_13 = 2217608049U;
unsigned int var_15 = 3083154051U;
int zero = 0;
unsigned int var_20 = 3031871625U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
