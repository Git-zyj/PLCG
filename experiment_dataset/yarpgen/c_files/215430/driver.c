#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1002247238;
unsigned long long int var_2 = 6637333006262303037ULL;
unsigned short var_5 = (unsigned short)48593;
unsigned long long int var_6 = 15093496434923173643ULL;
unsigned long long int var_7 = 14174872076863376625ULL;
unsigned char var_8 = (unsigned char)235;
unsigned short var_9 = (unsigned short)57686;
signed char var_12 = (signed char)-39;
unsigned long long int var_16 = 12964775662076386656ULL;
int zero = 0;
short var_17 = (short)21639;
unsigned long long int var_18 = 135709000937524916ULL;
unsigned int var_19 = 598779660U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)39660;
unsigned long long int var_22 = 1120221371092458663ULL;
unsigned short var_23 = (unsigned short)36946;
unsigned char var_24 = (unsigned char)197;
int var_25 = 314864343;
unsigned short var_26 = (unsigned short)9881;
unsigned short var_27 = (unsigned short)5734;
long long int var_28 = 7378375508453089212LL;
short arr_1 [18] [18] ;
short arr_3 [18] ;
unsigned long long int arr_4 [18] [18] ;
unsigned long long int arr_6 [18] [18] [18] [18] ;
signed char arr_11 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-19916;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)5584;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2510825759713940981ULL : 18350043416029866553ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6851938562284812270ULL : 14737720369836923547ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)52 : (signed char)-16;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
