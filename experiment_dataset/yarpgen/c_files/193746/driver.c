#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48135;
unsigned int var_1 = 3329893095U;
unsigned short var_2 = (unsigned short)34724;
unsigned char var_5 = (unsigned char)63;
signed char var_6 = (signed char)-36;
unsigned short var_8 = (unsigned short)56339;
unsigned short var_9 = (unsigned short)65282;
unsigned int var_10 = 2115973804U;
int zero = 0;
short var_12 = (short)22087;
signed char var_13 = (signed char)46;
unsigned short var_14 = (unsigned short)48346;
signed char var_15 = (signed char)117;
unsigned short var_16 = (unsigned short)45705;
unsigned char var_17 = (unsigned char)181;
signed char var_18 = (signed char)45;
unsigned short var_19 = (unsigned short)29279;
unsigned short var_20 = (unsigned short)43125;
unsigned short var_21 = (unsigned short)54913;
unsigned short arr_1 [16] ;
short arr_2 [16] [16] [16] ;
signed char arr_6 [16] ;
unsigned short arr_8 [16] ;
unsigned short arr_9 [16] ;
unsigned short arr_11 [16] ;
signed char arr_12 [16] [16] ;
unsigned int arr_19 [16] [16] [16] ;
unsigned char arr_15 [16] ;
unsigned char arr_22 [16] [16] ;
unsigned short arr_23 [16] [16] [16] [16] ;
signed char arr_26 [16] ;
unsigned short arr_27 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)37225;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)9924 : (short)-627;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20634 : (unsigned short)45253;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned short)42117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)47679;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 2214502763U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)252 : (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)130 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)24680 : (unsigned short)7374;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (signed char)-28 : (signed char)60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60897 : (unsigned short)9728;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
