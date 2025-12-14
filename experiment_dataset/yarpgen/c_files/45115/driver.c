#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 394110427U;
unsigned short var_2 = (unsigned short)18291;
unsigned char var_4 = (unsigned char)48;
unsigned long long int var_5 = 16798812503543309570ULL;
signed char var_6 = (signed char)63;
unsigned char var_7 = (unsigned char)58;
unsigned int var_9 = 3394833050U;
unsigned char var_14 = (unsigned char)227;
signed char var_15 = (signed char)25;
int zero = 0;
unsigned long long int var_16 = 3807615644205124011ULL;
unsigned long long int var_17 = 10466227245310548928ULL;
unsigned char var_18 = (unsigned char)160;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)128;
unsigned int arr_1 [17] [17] ;
unsigned int arr_2 [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
unsigned long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1557669295U : 846854994U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2143070628U : 3602858275U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7243576933858570973ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 15950298737443927909ULL : 10738695256842211931ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
