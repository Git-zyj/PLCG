#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)50624;
unsigned short var_5 = (unsigned short)14259;
int var_8 = 1751783900;
int var_9 = 210315608;
int var_10 = -194758723;
unsigned char var_11 = (unsigned char)64;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)20062;
unsigned short var_15 = (unsigned short)41634;
int zero = 0;
unsigned short var_16 = (unsigned short)23523;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 16466580408073947725ULL;
unsigned char arr_0 [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
signed char arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8889928606316975627ULL : 741979216548220639ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-72;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
