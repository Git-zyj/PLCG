#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -423019429989013585LL;
signed char var_1 = (signed char)16;
unsigned char var_2 = (unsigned char)16;
unsigned int var_3 = 3758733458U;
unsigned char var_4 = (unsigned char)201;
short var_5 = (short)25650;
short var_6 = (short)24426;
unsigned char var_7 = (unsigned char)230;
long long int var_9 = -128232856068645810LL;
unsigned char var_10 = (unsigned char)92;
short var_11 = (short)28095;
signed char var_12 = (signed char)89;
unsigned char var_13 = (unsigned char)213;
unsigned char var_15 = (unsigned char)162;
int zero = 0;
unsigned short var_16 = (unsigned short)24897;
unsigned int var_17 = 36240033U;
unsigned char var_18 = (unsigned char)54;
unsigned char var_19 = (unsigned char)52;
short var_20 = (short)25404;
unsigned char var_21 = (unsigned char)94;
unsigned char var_22 = (unsigned char)216;
int var_23 = -2133143698;
short var_24 = (short)-850;
short var_25 = (short)19830;
unsigned char var_26 = (unsigned char)114;
unsigned char var_27 = (unsigned char)40;
short var_28 = (short)-12097;
signed char var_29 = (signed char)29;
unsigned short var_30 = (unsigned short)45101;
unsigned int var_31 = 1794120566U;
unsigned char var_32 = (unsigned char)84;
unsigned char var_33 = (unsigned char)132;
unsigned int arr_6 [17] ;
signed char arr_19 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 1783369486U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)13 : (signed char)122;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
