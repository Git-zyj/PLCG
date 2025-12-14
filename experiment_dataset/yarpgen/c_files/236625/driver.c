#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 847069818U;
unsigned long long int var_1 = 5546995743520689195ULL;
unsigned short var_2 = (unsigned short)31355;
unsigned short var_3 = (unsigned short)29058;
signed char var_4 = (signed char)31;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 922451266818388383ULL;
signed char var_8 = (signed char)-82;
unsigned short var_9 = (unsigned short)2959;
long long int var_10 = 9094176850079484830LL;
int var_11 = -1388196688;
unsigned char var_12 = (unsigned char)253;
int zero = 0;
signed char var_13 = (signed char)-38;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1886204951907176354LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)3;
long long int var_18 = 5407563554243592324LL;
short var_19 = (short)-20158;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-25;
long long int var_22 = -4137875007408417254LL;
short var_23 = (short)32399;
int var_24 = -1061335568;
_Bool arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_2 [14] ;
unsigned short arr_6 [14] ;
signed char arr_9 [14] [14] [14] [14] ;
long long int arr_12 [14] [14] [14] [14] [14] ;
short arr_14 [14] [14] ;
unsigned long long int arr_15 [14] [14] [14] [14] ;
signed char arr_20 [20] ;
int arr_7 [14] [14] [14] ;
unsigned long long int arr_16 [14] [14] ;
signed char arr_25 [20] ;
signed char arr_31 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 9978245697635179667ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 10885554449694577877ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)40298;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -9192245184339651998LL : 7226436455882363944LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-10297;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 4048732919229651291ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2039957632 : 440730454;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 3156751109677853707ULL : 15884149383037353346ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (signed char)-127 : (signed char)-109;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
