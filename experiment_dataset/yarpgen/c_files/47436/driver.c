#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18730;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)43;
_Bool var_7 = (_Bool)0;
int var_9 = 394007884;
long long int var_10 = 176966997882650229LL;
long long int var_14 = 5446346585180230264LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 652043852;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)5732;
unsigned long long int arr_2 [12] ;
short arr_3 [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1654244758404177146ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)18398;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)8;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
