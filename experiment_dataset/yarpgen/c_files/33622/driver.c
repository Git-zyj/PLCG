#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7368;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)51;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-74;
unsigned char var_5 = (unsigned char)209;
short var_6 = (short)11610;
short var_7 = (short)-16484;
long long int var_8 = -5283418824087926466LL;
short var_9 = (short)-10891;
long long int var_11 = 4445578857064018464LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 12974753264310175819ULL;
unsigned char var_14 = (unsigned char)131;
unsigned char var_15 = (unsigned char)92;
unsigned char var_16 = (unsigned char)198;
unsigned char var_17 = (unsigned char)117;
unsigned long long int var_18 = 4633069899007410175ULL;
unsigned short var_19 = (unsigned short)36038;
unsigned char var_20 = (unsigned char)67;
signed char var_21 = (signed char)-69;
short var_22 = (short)-7351;
signed char var_23 = (signed char)105;
short var_24 = (short)-5704;
unsigned char var_25 = (unsigned char)10;
_Bool arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
signed char arr_5 [16] [16] ;
int arr_6 [16] [16] ;
unsigned short arr_11 [25] ;
unsigned int arr_12 [25] ;
_Bool arr_13 [25] ;
_Bool arr_18 [17] ;
_Bool arr_20 [17] [17] [17] ;
unsigned long long int arr_21 [17] [17] ;
signed char arr_3 [16] ;
unsigned char arr_16 [17] ;
signed char arr_22 [17] [17] ;
unsigned long long int arr_23 [17] [17] [17] ;
unsigned char arr_27 [17] [17] ;
short arr_28 [17] ;
signed char arr_34 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -107800935;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned short)48038;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 73918211U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = 17012812253518483521ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)122 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14530090481819301522ULL : 16546923963794414685ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_28 [i_0] = (short)14885;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)80 : (signed char)-56;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
