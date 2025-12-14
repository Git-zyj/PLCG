#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1132952670;
signed char var_2 = (signed char)-70;
unsigned long long int var_3 = 6817862418788229594ULL;
long long int var_5 = -2574348761964588026LL;
unsigned long long int var_7 = 13400338858447369136ULL;
signed char var_12 = (signed char)-113;
long long int var_14 = 5722774291861871049LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 15172362057871995866ULL;
unsigned long long int var_19 = 16394284950941587233ULL;
unsigned char var_20 = (unsigned char)54;
unsigned char var_21 = (unsigned char)174;
unsigned long long int var_22 = 17858398748307440964ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
