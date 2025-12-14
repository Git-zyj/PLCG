#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56370;
unsigned short var_1 = (unsigned short)13233;
int var_2 = 1932864650;
unsigned short var_3 = (unsigned short)23494;
long long int var_4 = 6887732261966256346LL;
short var_7 = (short)29578;
short var_10 = (short)-15693;
unsigned short var_11 = (unsigned short)40261;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 14873492977388284130ULL;
unsigned short var_15 = (unsigned short)35838;
signed char var_16 = (signed char)38;
unsigned long long int var_17 = 17215655494259018671ULL;
unsigned int var_18 = 3552210019U;
short arr_0 [16] ;
int arr_1 [16] [16] ;
signed char arr_4 [19] [19] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)21159;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 252043285;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1714679733;
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
