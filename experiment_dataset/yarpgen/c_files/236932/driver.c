#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
_Bool var_1 = (_Bool)1;
short var_4 = (short)5046;
unsigned short var_5 = (unsigned short)53372;
unsigned short var_7 = (unsigned short)53863;
int var_8 = -680784356;
unsigned char var_9 = (unsigned char)91;
unsigned int var_12 = 3755277049U;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)8783;
unsigned short var_15 = (unsigned short)41881;
long long int var_16 = 8840106495004595564LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)1282;
short var_19 = (short)1397;
signed char var_20 = (signed char)-16;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 4156490974U;
signed char var_24 = (signed char)-84;
long long int var_25 = -7141879265983066308LL;
signed char var_26 = (signed char)-19;
unsigned int var_27 = 2340719391U;
short var_28 = (short)-25586;
unsigned short var_29 = (unsigned short)9121;
unsigned short arr_0 [23] ;
_Bool arr_1 [23] ;
_Bool arr_2 [23] ;
int arr_4 [23] ;
long long int arr_5 [23] [23] [23] ;
unsigned short arr_6 [23] ;
unsigned short arr_7 [23] [23] ;
int arr_8 [23] [23] [23] [23] ;
long long int arr_9 [23] ;
int arr_10 [23] ;
_Bool arr_15 [19] [19] ;
int arr_16 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)34834;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1178727710 : 894878948;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -4293527571181315649LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)9516;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)27107;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -653262408;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1413217657894483201LL : -8621997886468737159LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 2125398187;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = -2082868014;
}

void checksum() {
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
