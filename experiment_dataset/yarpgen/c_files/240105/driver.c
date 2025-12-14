#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned long long int var_2 = 12534430065556566670ULL;
short var_3 = (short)-18462;
unsigned char var_6 = (unsigned char)187;
long long int var_7 = 7450738384563512676LL;
unsigned int var_9 = 3401813371U;
unsigned long long int var_10 = 6356865959508117072ULL;
int zero = 0;
int var_11 = 1902745530;
_Bool var_12 = (_Bool)0;
int var_13 = -1086863841;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 4129558269U;
short arr_0 [22] ;
unsigned char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-20320;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)37;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
