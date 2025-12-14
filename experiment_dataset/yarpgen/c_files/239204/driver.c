#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2962703840611394002LL;
unsigned short var_1 = (unsigned short)26895;
unsigned short var_2 = (unsigned short)56029;
unsigned long long int var_4 = 15361221527189382701ULL;
int var_5 = -384753900;
unsigned long long int var_6 = 10351903495622541614ULL;
int var_7 = -1409198804;
unsigned short var_8 = (unsigned short)48812;
unsigned short var_9 = (unsigned short)43393;
unsigned long long int var_10 = 4361313500147299861ULL;
int zero = 0;
unsigned long long int var_11 = 10598604965424422720ULL;
unsigned long long int var_12 = 13704869456411030877ULL;
short var_13 = (short)-27118;
unsigned short var_14 = (unsigned short)31999;
unsigned short arr_0 [18] ;
short arr_3 [18] ;
_Bool arr_8 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)44000;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-5136;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
