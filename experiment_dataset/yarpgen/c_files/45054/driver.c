#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2088492639;
signed char var_1 = (signed char)-94;
int var_2 = 1358434687;
unsigned short var_4 = (unsigned short)36370;
unsigned int var_6 = 1249623207U;
int var_7 = 123383281;
int var_8 = 881294097;
int var_9 = 95036815;
short var_11 = (short)30285;
signed char var_12 = (signed char)23;
int zero = 0;
int var_13 = 272614398;
unsigned short var_14 = (unsigned short)28705;
int var_15 = -630272250;
signed char var_16 = (signed char)-40;
int var_17 = -1792784787;
signed char var_18 = (signed char)53;
unsigned int var_19 = 2457863217U;
unsigned char var_20 = (unsigned char)9;
unsigned short var_21 = (unsigned short)2901;
unsigned short var_22 = (unsigned short)12182;
int var_23 = 1634025476;
unsigned short var_24 = (unsigned short)7022;
unsigned char var_25 = (unsigned char)216;
int var_26 = -1392671821;
int arr_1 [19] ;
short arr_9 [11] [11] ;
int arr_12 [11] [11] [11] [11] ;
long long int arr_14 [11] [11] [11] [11] ;
unsigned char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2050307632;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (short)9256;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 577276922;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -9073941948418408296LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)136;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
