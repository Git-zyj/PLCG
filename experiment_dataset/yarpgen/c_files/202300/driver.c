#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
long long int var_3 = 8346859600019810905LL;
signed char var_6 = (signed char)119;
unsigned int var_8 = 1789246340U;
int var_9 = 204330698;
int zero = 0;
long long int var_12 = -3101681819124825037LL;
signed char var_13 = (signed char)65;
unsigned long long int var_14 = 3644579753827721239ULL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-58;
long long int var_17 = 2083314595236829575LL;
signed char var_18 = (signed char)-50;
unsigned int arr_0 [12] ;
signed char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 4008381939U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-38;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
