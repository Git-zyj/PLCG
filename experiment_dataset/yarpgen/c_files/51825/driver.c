#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5692315031887348665LL;
unsigned char var_1 = (unsigned char)199;
int var_2 = -1779593535;
signed char var_3 = (signed char)68;
unsigned short var_5 = (unsigned short)40494;
unsigned short var_6 = (unsigned short)14196;
long long int var_7 = -6295803784728575717LL;
long long int var_8 = 6824851803630165651LL;
signed char var_9 = (signed char)102;
int zero = 0;
unsigned short var_10 = (unsigned short)63177;
signed char var_11 = (signed char)-85;
signed char var_12 = (signed char)2;
signed char var_13 = (signed char)21;
signed char var_14 = (signed char)-66;
_Bool var_15 = (_Bool)1;
unsigned short arr_7 [25] ;
long long int arr_12 [25] [25] [25] [25] ;
long long int arr_3 [21] ;
unsigned int arr_4 [21] ;
int arr_15 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)43675;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 2861063742218303300LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -3517822705145633424LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 327424394U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? -1105021862 : 1086872392;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
