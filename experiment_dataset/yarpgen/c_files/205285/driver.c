#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
signed char var_4 = (signed char)33;
unsigned char var_7 = (unsigned char)86;
long long int var_10 = -1887567230584930493LL;
int zero = 0;
unsigned int var_13 = 1641240981U;
unsigned char var_14 = (unsigned char)141;
unsigned int var_15 = 1844377192U;
long long int var_16 = -1568268761146684443LL;
unsigned int var_17 = 1123533019U;
unsigned char var_18 = (unsigned char)115;
unsigned int var_19 = 3412495773U;
int var_20 = 1366733564;
int var_21 = -1663177007;
signed char var_22 = (signed char)-120;
int var_23 = 249848769;
unsigned char var_24 = (unsigned char)29;
unsigned char var_25 = (unsigned char)191;
unsigned char var_26 = (unsigned char)250;
int var_27 = 930849296;
unsigned char var_28 = (unsigned char)60;
signed char var_29 = (signed char)20;
unsigned int var_30 = 1508898171U;
unsigned char var_31 = (unsigned char)55;
unsigned long long int var_32 = 5705920904684719349ULL;
unsigned int var_33 = 1011969840U;
unsigned char arr_2 [17] ;
unsigned long long int arr_4 [17] [17] [17] ;
unsigned char arr_5 [17] [17] [17] ;
long long int arr_7 [17] [17] [17] ;
int arr_8 [17] [17] [17] ;
long long int arr_9 [17] [17] [17] [17] ;
unsigned long long int arr_10 [18] [18] ;
unsigned char arr_11 [18] ;
signed char arr_15 [18] [18] ;
unsigned int arr_16 [18] [18] ;
int arr_18 [19] ;
unsigned long long int arr_19 [19] ;
unsigned char arr_21 [19] [19] ;
unsigned long long int arr_26 [19] ;
long long int arr_29 [19] [19] [19] ;
long long int arr_17 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)91 : (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 9848067805980109695ULL : 10406408364148921437ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)31 : (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4708782178987310885LL : 2126534802547446799LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 218227181 : 496734070;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3887752623224379926LL : 189820065042769043LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 14200995506979663597ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = 1617640089U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = -1162501849;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 3688818159422355472ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = 14206223514379645550ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2217346061927887589LL : -2225090852526397934LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = 6426767148272355979LL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
