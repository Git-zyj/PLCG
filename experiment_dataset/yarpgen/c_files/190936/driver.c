#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3921177640U;
unsigned int var_3 = 4110955250U;
long long int var_7 = -691504555764364293LL;
short var_9 = (short)-8275;
int var_10 = 1357872230;
unsigned long long int var_11 = 14249393243767659460ULL;
unsigned short var_13 = (unsigned short)1618;
int zero = 0;
unsigned short var_15 = (unsigned short)56397;
unsigned long long int var_16 = 1792178179947874717ULL;
short var_17 = (short)12969;
int var_18 = -622401236;
unsigned char var_19 = (unsigned char)29;
short var_20 = (short)-16934;
short var_21 = (short)-18724;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)89;
short var_24 = (short)-5801;
long long int var_25 = 2999603465324548493LL;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)-59;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)203;
short var_30 = (short)13318;
short var_31 = (short)-21924;
short var_32 = (short)-10348;
unsigned int arr_0 [18] ;
int arr_2 [18] ;
long long int arr_4 [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
unsigned int arr_7 [18] ;
short arr_8 [18] ;
long long int arr_18 [17] [17] ;
unsigned int arr_23 [17] ;
unsigned long long int arr_24 [17] [17] [17] [17] [17] ;
unsigned int arr_5 [18] ;
unsigned long long int arr_26 [17] [17] [17] [17] [17] ;
short arr_27 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2225594840U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1924903703;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -4639298350216331650LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 12567726845457054524ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 4192857715U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (short)-14131;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = 3578188666365782036LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = 657245951U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 13517263966050510656ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1246841938U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 3176116171872452754ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_27 [i_0] [i_1] = (short)-4060;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
