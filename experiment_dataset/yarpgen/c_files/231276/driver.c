#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3318046486U;
unsigned long long int var_2 = 12601962497584199738ULL;
_Bool var_3 = (_Bool)0;
long long int var_4 = 149344040880983882LL;
short var_5 = (short)-26342;
signed char var_8 = (signed char)-65;
int zero = 0;
unsigned int var_10 = 748619449U;
long long int var_11 = -4629893152682753708LL;
unsigned int var_12 = 3000139150U;
unsigned long long int var_13 = 16399557461257435671ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
