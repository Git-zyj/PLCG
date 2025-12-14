#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8590519167513735634ULL;
long long int var_8 = 1454546843497624035LL;
long long int var_10 = -3350593905246001005LL;
unsigned char var_11 = (unsigned char)118;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)74;
unsigned char var_14 = (unsigned char)204;
int zero = 0;
unsigned char var_18 = (unsigned char)7;
short var_19 = (short)6916;
unsigned char var_20 = (unsigned char)120;
unsigned char var_21 = (unsigned char)132;
unsigned char var_22 = (unsigned char)183;
unsigned short arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)31400 : (unsigned short)58644;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
