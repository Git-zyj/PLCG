#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -414079630;
unsigned short var_1 = (unsigned short)13688;
unsigned long long int var_4 = 18124739449912308074ULL;
unsigned char var_5 = (unsigned char)55;
unsigned short var_6 = (unsigned short)15771;
signed char var_7 = (signed char)3;
unsigned short var_8 = (unsigned short)35015;
unsigned short var_10 = (unsigned short)40146;
signed char var_11 = (signed char)-38;
int zero = 0;
int var_13 = -537260647;
unsigned short var_14 = (unsigned short)56068;
unsigned short var_15 = (unsigned short)59989;
unsigned char var_16 = (unsigned char)254;
_Bool var_17 = (_Bool)1;
long long int var_18 = -7091686180157147000LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 17100747911486743804ULL;
signed char var_21 = (signed char)-100;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-32176;
unsigned long long int var_24 = 16416379654185112853ULL;
_Bool arr_2 [18] ;
unsigned short arr_3 [18] [18] ;
long long int arr_5 [19] [19] ;
unsigned int arr_6 [19] ;
unsigned long long int arr_10 [19] [19] [19] ;
int arr_11 [19] ;
unsigned short arr_18 [17] ;
unsigned long long int arr_22 [17] [17] ;
unsigned short arr_4 [18] [18] ;
unsigned short arr_16 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)54214;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -8400203091833377384LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 3849549079U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 10254605768613757497ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -1865725293;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (unsigned short)1687;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = 9335080399965569559ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)20607;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (unsigned short)19261;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
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
