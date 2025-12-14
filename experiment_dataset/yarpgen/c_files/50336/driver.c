#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3263257328U;
signed char var_7 = (signed char)-20;
long long int var_8 = 7010292756924246742LL;
long long int var_10 = 8940978454307397653LL;
unsigned long long int var_11 = 16147679932699560006ULL;
short var_12 = (short)-22821;
unsigned char var_13 = (unsigned char)100;
unsigned long long int var_16 = 15760235718090774113ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 1485500027;
unsigned long long int var_19 = 15102866181452042138ULL;
unsigned long long int var_20 = 1309236016455254120ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
