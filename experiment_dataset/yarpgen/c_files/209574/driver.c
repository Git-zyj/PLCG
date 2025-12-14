#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6681;
unsigned short var_5 = (unsigned short)57240;
signed char var_6 = (signed char)-8;
short var_8 = (short)841;
unsigned int var_9 = 4029266411U;
short var_11 = (short)-23962;
unsigned short var_12 = (unsigned short)22548;
int zero = 0;
unsigned short var_19 = (unsigned short)6849;
int var_20 = -1667045644;
unsigned int var_21 = 858960399U;
unsigned char var_22 = (unsigned char)105;
unsigned long long int var_23 = 13464365028147817025ULL;
unsigned short var_24 = (unsigned short)23142;
unsigned short var_25 = (unsigned short)48301;
int var_26 = 1132302440;
short arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] [19] [19] ;
unsigned short arr_4 [19] ;
unsigned short arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-19829;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)60625;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)51005;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)52985;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)55210 : (unsigned short)32990;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
