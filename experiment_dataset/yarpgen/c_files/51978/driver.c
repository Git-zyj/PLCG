#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23785;
int var_1 = 2144519092;
unsigned long long int var_2 = 16109007317052582821ULL;
int var_3 = 796167053;
signed char var_5 = (signed char)-73;
unsigned short var_7 = (unsigned short)50185;
unsigned short var_8 = (unsigned short)25141;
unsigned long long int var_9 = 16506224069834561872ULL;
int zero = 0;
unsigned long long int var_11 = 839695105087502117ULL;
unsigned short var_12 = (unsigned short)30440;
unsigned int var_13 = 1413702931U;
int var_14 = 1900909233;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
