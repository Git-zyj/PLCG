#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 15849300004262518361ULL;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-58;
long long int var_10 = -3674543004277040179LL;
unsigned int var_13 = 1899246047U;
signed char var_17 = (signed char)-75;
int zero = 0;
unsigned int var_20 = 1305266072U;
long long int var_21 = -5557593238300728474LL;
short var_22 = (short)16047;
unsigned char var_23 = (unsigned char)87;
long long int var_24 = 8038738191442054862LL;
signed char arr_1 [14] ;
int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -782198727;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
