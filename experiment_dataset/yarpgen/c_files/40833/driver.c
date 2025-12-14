#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1685825248;
int var_1 = 1172552637;
unsigned long long int var_2 = 16973747962036414542ULL;
unsigned int var_3 = 3978406820U;
signed char var_5 = (signed char)22;
int var_6 = 1343287695;
long long int var_7 = -912136772399411839LL;
unsigned int var_9 = 2705109700U;
unsigned int var_10 = 1882351140U;
unsigned char var_11 = (unsigned char)168;
unsigned char var_12 = (unsigned char)236;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int var_15 = 647549577;
unsigned char var_16 = (unsigned char)235;
short var_17 = (short)31408;
int zero = 0;
long long int var_18 = -6088956893715406292LL;
signed char var_19 = (signed char)99;
unsigned int var_20 = 2401617862U;
int var_21 = 1729673110;
unsigned int var_22 = 4005520568U;
unsigned short var_23 = (unsigned short)35042;
unsigned char var_24 = (unsigned char)175;
int var_25 = 324016131;
unsigned int arr_1 [15] ;
int arr_3 [15] [15] [15] ;
signed char arr_6 [15] ;
signed char arr_11 [15] [15] [15] [15] [15] ;
unsigned long long int arr_12 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1300133890U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -950825812;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 12270829764782465770ULL;
}

void checksum() {
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
