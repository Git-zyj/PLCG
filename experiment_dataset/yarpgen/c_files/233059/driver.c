#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8911;
unsigned int var_2 = 3828986864U;
unsigned short var_3 = (unsigned short)8445;
unsigned short var_7 = (unsigned short)61637;
signed char var_9 = (signed char)98;
short var_11 = (short)-25677;
short var_17 = (short)-17575;
int zero = 0;
unsigned short var_18 = (unsigned short)32070;
unsigned short var_19 = (unsigned short)11307;
unsigned short var_20 = (unsigned short)44334;
long long int var_21 = 3896620098263760814LL;
short var_22 = (short)-3940;
long long int var_23 = 6513835132469811339LL;
unsigned int var_24 = 2982918609U;
int var_25 = 43232851;
unsigned short var_26 = (unsigned short)55923;
unsigned int var_27 = 1526472455U;
unsigned int var_28 = 3974402158U;
short var_29 = (short)13764;
short var_30 = (short)-19782;
int var_31 = 626997451;
unsigned int arr_6 [24] ;
signed char arr_7 [24] ;
long long int arr_8 [24] ;
int arr_9 [24] ;
unsigned char arr_10 [19] ;
int arr_11 [19] ;
long long int arr_16 [19] ;
unsigned short arr_20 [19] [19] [19] ;
long long int arr_21 [19] [19] ;
unsigned short arr_22 [19] [19] ;
short arr_23 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_29 [19] [19] ;
int arr_2 [12] ;
unsigned char arr_13 [19] ;
signed char arr_14 [19] ;
signed char arr_24 [19] [19] ;
unsigned int arr_28 [19] ;
long long int arr_33 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 328315722U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)98 : (signed char)112;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 660954299503936415LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1270645010 : -2143596125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 2004021952;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 5659349602907075069LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)25798;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = -5750279023136143095LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)12890;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)26948;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned short)64335;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1488957510 : 1643253680;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = 1824186356U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_33 [i_0] [i_1] = -1825502725068069212LL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
