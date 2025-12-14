#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29880;
long long int var_1 = 2483504799346977274LL;
signed char var_2 = (signed char)114;
unsigned short var_3 = (unsigned short)56977;
int var_4 = -508955155;
short var_5 = (short)5661;
unsigned long long int var_6 = 8395887581407344169ULL;
signed char var_7 = (signed char)33;
int var_8 = -1144383895;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)24443;
long long int var_11 = -6806658551906943538LL;
unsigned long long int var_12 = 13874320810879612352ULL;
unsigned int var_13 = 1833040589U;
int zero = 0;
int var_14 = 231277936;
signed char var_15 = (signed char)107;
long long int var_16 = 6443615876884200885LL;
unsigned short var_17 = (unsigned short)16361;
signed char var_18 = (signed char)-122;
signed char var_19 = (signed char)108;
unsigned short arr_15 [24] [24] [24] [24] ;
unsigned short arr_16 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)27216 : (unsigned short)59977;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56198 : (unsigned short)49170;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
