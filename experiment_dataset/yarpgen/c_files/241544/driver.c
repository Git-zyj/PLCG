#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
_Bool var_2 = (_Bool)1;
long long int var_4 = -4916747063696469587LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 13412646860162118428ULL;
long long int var_12 = -5171736498880373234LL;
long long int var_13 = 3684486603192030880LL;
_Bool var_14 = (_Bool)0;
signed char var_18 = (signed char)-122;
int zero = 0;
int var_19 = -165896495;
unsigned int var_20 = 1665309351U;
signed char var_21 = (signed char)26;
unsigned char var_22 = (unsigned char)97;
unsigned long long int arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 8906002041451959275ULL;
}

void checksum() {
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
