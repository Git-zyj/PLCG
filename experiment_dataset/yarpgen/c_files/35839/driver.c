#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4278612457U;
int var_2 = -1635352145;
long long int var_3 = 2218399135896895625LL;
signed char var_4 = (signed char)-123;
unsigned short var_5 = (unsigned short)9442;
unsigned int var_7 = 3653246613U;
unsigned char var_8 = (unsigned char)44;
unsigned long long int var_9 = 8843062060078044613ULL;
unsigned short var_11 = (unsigned short)60790;
int zero = 0;
unsigned long long int var_15 = 430189498824236263ULL;
int var_16 = 1102163756;
unsigned short var_17 = (unsigned short)60477;
int var_18 = -46971631;
unsigned char var_19 = (unsigned char)174;
signed char var_20 = (signed char)-123;
unsigned long long int var_21 = 16972803007770129067ULL;
short var_22 = (short)-14611;
short var_23 = (short)14380;
long long int var_24 = 5859450419385538546LL;
unsigned char var_25 = (unsigned char)100;
_Bool arr_0 [16] ;
int arr_1 [16] ;
_Bool arr_4 [16] [16] [16] ;
unsigned char arr_5 [16] [16] [16] [16] ;
unsigned long long int arr_6 [16] ;
unsigned char arr_7 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -1767906416;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 12083266699349573662ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)168;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
