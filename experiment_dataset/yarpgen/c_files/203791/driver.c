#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2347483346U;
signed char var_1 = (signed char)-23;
short var_3 = (short)-26818;
unsigned long long int var_4 = 9039156337784061746ULL;
unsigned short var_5 = (unsigned short)36010;
short var_6 = (short)23105;
unsigned char var_8 = (unsigned char)202;
unsigned short var_11 = (unsigned short)26446;
unsigned int var_12 = 3010548372U;
long long int var_15 = 6075927882942720757LL;
int zero = 0;
int var_17 = -1217216531;
unsigned short var_18 = (unsigned short)63995;
unsigned long long int var_19 = 14819076732889000127ULL;
int var_20 = 1638765658;
unsigned char var_21 = (unsigned char)191;
signed char var_22 = (signed char)-99;
unsigned long long int var_23 = 8174719108267737865ULL;
unsigned char var_24 = (unsigned char)123;
int var_25 = -113125361;
unsigned short var_26 = (unsigned short)45998;
_Bool arr_1 [23] [23] ;
signed char arr_8 [18] ;
int arr_14 [25] [25] ;
unsigned long long int arr_16 [25] ;
_Bool arr_17 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = 920559705;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 7772601293881696795ULL : 13398085588755668033ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
