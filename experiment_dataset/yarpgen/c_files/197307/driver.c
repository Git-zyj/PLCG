#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1196702477U;
int var_1 = 123729055;
int var_2 = -1067535227;
unsigned short var_4 = (unsigned short)3166;
short var_6 = (short)27901;
unsigned long long int var_7 = 3674303381980811579ULL;
unsigned char var_8 = (unsigned char)19;
unsigned long long int var_9 = 7943046308660144784ULL;
long long int var_13 = -6238481056966271087LL;
signed char var_15 = (signed char)-88;
short var_16 = (short)-16052;
unsigned char var_18 = (unsigned char)70;
int var_19 = -1045824799;
int zero = 0;
unsigned int var_20 = 4031761491U;
unsigned char var_21 = (unsigned char)37;
unsigned long long int var_22 = 7794396347463444683ULL;
long long int var_23 = -2979182819511553698LL;
unsigned int var_24 = 443006274U;
short var_25 = (short)20193;
signed char var_26 = (signed char)41;
int var_27 = 1219244552;
unsigned short arr_0 [19] ;
long long int arr_4 [19] [19] ;
int arr_5 [19] [19] ;
signed char arr_9 [22] ;
unsigned char arr_2 [19] ;
int arr_3 [19] ;
unsigned long long int arr_6 [19] [19] ;
signed char arr_7 [19] [19] [19] ;
short arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)52272;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -662758952220431023LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -2001808845;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -364212570;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 10776710677748850152ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (short)23577;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
