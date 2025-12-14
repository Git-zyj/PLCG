#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15270960090095534390ULL;
unsigned int var_2 = 3683946469U;
long long int var_6 = 8865846000225341527LL;
long long int var_10 = -7230814542287806320LL;
long long int var_11 = 5080044757086226835LL;
unsigned long long int var_13 = 12117899922671514201ULL;
unsigned long long int var_15 = 13140893453790026903ULL;
short var_17 = (short)-29886;
int zero = 0;
unsigned int var_20 = 2244557004U;
unsigned int var_21 = 2904829971U;
long long int var_22 = 7676445679893490742LL;
long long int var_23 = 4981818529204634155LL;
short var_24 = (short)-19025;
unsigned int var_25 = 2772063032U;
unsigned int var_26 = 3173326366U;
unsigned long long int var_27 = 3206370926740623055ULL;
unsigned long long int var_28 = 10527852805282687975ULL;
int var_29 = 291465053;
long long int var_30 = 5553798756035959667LL;
short var_31 = (short)-26270;
short var_32 = (short)-22788;
int var_33 = 825121283;
int var_34 = -995111721;
short var_35 = (short)-19121;
unsigned int arr_0 [18] ;
short arr_2 [18] [18] ;
short arr_3 [18] [18] ;
long long int arr_5 [18] ;
long long int arr_12 [18] [18] [18] [18] ;
short arr_18 [18] [18] ;
unsigned int arr_23 [19] ;
unsigned int arr_24 [19] ;
unsigned int arr_4 [18] ;
unsigned long long int arr_7 [18] ;
long long int arr_14 [18] ;
int arr_17 [18] [18] [18] ;
int arr_20 [18] ;
short arr_21 [18] ;
unsigned long long int arr_22 [18] ;
int arr_25 [19] [19] ;
long long int arr_26 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 918689851U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-16944;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-2702;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -7208682733648364338LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 2894954386720358505LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (short)-9044;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = 2238704177U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = 3022770877U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 133136804U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 6936556802826029938ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 1775394840144240904LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1649735398;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -1726300238 : 511115736;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (short)-10288 : (short)29154;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 14392896950282030310ULL : 16416118906409360258ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_25 [i_0] [i_1] = 712268005;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = -4587049641962873332LL;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
