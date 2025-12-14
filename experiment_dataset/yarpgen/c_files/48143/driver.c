#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
unsigned short var_1 = (unsigned short)10292;
unsigned int var_2 = 3744706465U;
int var_3 = 2011322591;
short var_5 = (short)26680;
unsigned char var_7 = (unsigned char)53;
unsigned char var_11 = (unsigned char)201;
unsigned int var_12 = 532993526U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 601815169356271856ULL;
int zero = 0;
unsigned int var_17 = 3402646850U;
short var_18 = (short)-4669;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2500401113U;
unsigned char var_21 = (unsigned char)147;
long long int var_22 = 7671119174940669729LL;
unsigned char var_23 = (unsigned char)216;
signed char var_24 = (signed char)117;
unsigned long long int var_25 = 13671275729170580995ULL;
short var_26 = (short)24714;
short var_27 = (short)26170;
unsigned long long int arr_3 [21] ;
long long int arr_10 [14] [14] [14] ;
unsigned long long int arr_11 [14] ;
short arr_18 [14] ;
_Bool arr_19 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2775276870789190243ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 4755215206261935132LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 1411549294681248002ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (short)4177;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
