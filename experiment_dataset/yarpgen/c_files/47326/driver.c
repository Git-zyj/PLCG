#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
int var_3 = -1389312053;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 13356403550623040390ULL;
signed char var_11 = (signed char)68;
unsigned int var_13 = 1019324050U;
_Bool var_14 = (_Bool)0;
int var_15 = -1442013294;
int zero = 0;
unsigned int var_18 = 3084845299U;
signed char var_19 = (signed char)-70;
signed char var_20 = (signed char)68;
unsigned int var_21 = 1859256809U;
_Bool var_22 = (_Bool)0;
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
