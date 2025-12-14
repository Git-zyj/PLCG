#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
unsigned int var_1 = 3720940595U;
unsigned short var_2 = (unsigned short)33544;
signed char var_3 = (signed char)-58;
long long int var_4 = 1619862187682868797LL;
long long int var_6 = 60886427002469478LL;
long long int var_7 = 8198244488328784429LL;
_Bool var_8 = (_Bool)0;
int var_10 = -1957407189;
short var_11 = (short)-18181;
unsigned short var_12 = (unsigned short)60261;
int zero = 0;
int var_14 = -2144535252;
unsigned long long int var_15 = 1547385616818739025ULL;
unsigned long long int var_16 = 4915477692526625660ULL;
int var_17 = -447670523;
long long int var_18 = 9100932210132840834LL;
unsigned short var_19 = (unsigned short)63438;
unsigned long long int var_20 = 11786363372192405938ULL;
unsigned int var_21 = 1578303609U;
long long int var_22 = 7961399442562337370LL;
unsigned int var_23 = 3871789216U;
_Bool var_24 = (_Bool)0;
int arr_1 [14] ;
unsigned short arr_3 [14] [14] [14] ;
unsigned char arr_6 [14] [14] [14] ;
long long int arr_12 [14] ;
long long int arr_15 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3599421;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)29470 : (unsigned short)42063;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -6466698289801249595LL : 540582080787435296LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 6681449125292119813LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
