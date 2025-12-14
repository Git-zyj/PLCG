#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8768933829606713897LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 5252268181461741159ULL;
long long int var_3 = 1216945399993160363LL;
short var_5 = (short)8392;
_Bool var_6 = (_Bool)0;
long long int var_7 = 873081468455524760LL;
long long int var_8 = 8839733651297075749LL;
signed char var_9 = (signed char)38;
int zero = 0;
signed char var_11 = (signed char)117;
unsigned long long int var_12 = 14026368932506761820ULL;
int var_13 = 308641915;
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
