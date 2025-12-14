#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -331184259;
unsigned short var_8 = (unsigned short)65280;
unsigned short var_9 = (unsigned short)44185;
short var_11 = (short)-27690;
int var_13 = 70147343;
signed char var_14 = (signed char)-42;
short var_15 = (short)-30308;
short var_18 = (short)-7545;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 6654392302537144199LL;
signed char var_22 = (signed char)68;
short var_23 = (short)-25826;
int var_24 = -1178995624;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)107;
long long int var_27 = 6607294956363170298LL;
_Bool var_28 = (_Bool)0;
short var_29 = (short)27693;
signed char var_30 = (signed char)-29;
unsigned short var_31 = (unsigned short)38615;
_Bool arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
short arr_11 [13] [13] [13] [13] [13] ;
int arr_14 [19] ;
unsigned short arr_15 [19] ;
int arr_16 [19] [19] ;
signed char arr_24 [18] [18] ;
int arr_2 [13] ;
short arr_13 [13] ;
_Bool arr_20 [19] ;
short arr_25 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2258821775531538313ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-24026;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -995330599 : -85478828;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (unsigned short)55621;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 495462281;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -53723387;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (short)-18436;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (short)1492 : (short)-6681;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
