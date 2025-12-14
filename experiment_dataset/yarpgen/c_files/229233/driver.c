#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1539533630;
signed char var_3 = (signed char)41;
long long int var_5 = 8174779775992027011LL;
unsigned long long int var_6 = 5084999356607094827ULL;
short var_7 = (short)-11060;
short var_8 = (short)1991;
long long int var_10 = 3469664899518253233LL;
unsigned short var_11 = (unsigned short)103;
unsigned char var_14 = (unsigned char)10;
int var_15 = -758754751;
int zero = 0;
signed char var_18 = (signed char)108;
int var_19 = 1872824031;
unsigned char var_20 = (unsigned char)220;
long long int var_21 = 856214146466771944LL;
long long int var_22 = -4078271733779295908LL;
unsigned short var_23 = (unsigned short)42580;
long long int var_24 = 7616740949182414748LL;
int var_25 = 1963043837;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
int var_29 = 1702502101;
unsigned char var_30 = (unsigned char)35;
unsigned long long int var_31 = 12385153411394073841ULL;
_Bool arr_0 [14] ;
_Bool arr_4 [16] [16] ;
unsigned long long int arr_5 [16] [16] ;
unsigned short arr_7 [16] ;
short arr_8 [16] [16] ;
signed char arr_9 [16] ;
int arr_10 [16] [16] [16] ;
signed char arr_16 [16] ;
long long int arr_19 [16] [16] [16] [16] [16] [16] ;
int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 1697090731638585361ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35192 : (unsigned short)24627;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-11356;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1517573741 : 977445589;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)-39;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 88880335815733073LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1864342341;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
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
