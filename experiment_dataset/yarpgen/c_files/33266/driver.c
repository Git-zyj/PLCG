#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46484;
long long int var_1 = -4404996336083332347LL;
unsigned char var_3 = (unsigned char)209;
unsigned char var_7 = (unsigned char)240;
unsigned short var_8 = (unsigned short)44391;
unsigned char var_9 = (unsigned char)65;
int var_10 = -1325873176;
long long int var_11 = 4933582290609207161LL;
unsigned short var_12 = (unsigned short)19908;
unsigned char var_14 = (unsigned char)214;
int var_15 = 89092597;
unsigned short var_16 = (unsigned short)30771;
long long int var_19 = -8368202405886298522LL;
int zero = 0;
long long int var_20 = -3922860128237120337LL;
int var_21 = 143188017;
long long int var_22 = 9220204380597547205LL;
unsigned short var_23 = (unsigned short)50534;
int var_24 = 626456630;
unsigned char var_25 = (unsigned char)55;
long long int var_26 = 5874414255994355496LL;
unsigned short var_27 = (unsigned short)4306;
long long int var_28 = -4000822038167518187LL;
unsigned short var_29 = (unsigned short)53918;
unsigned char var_30 = (unsigned char)176;
unsigned char var_31 = (unsigned char)251;
long long int var_32 = -3997791383722750334LL;
unsigned short var_33 = (unsigned short)58333;
unsigned short arr_1 [12] ;
unsigned char arr_2 [12] ;
int arr_4 [12] [12] ;
int arr_5 [12] [12] [12] ;
long long int arr_6 [12] ;
unsigned short arr_7 [12] [12] [12] ;
unsigned short arr_9 [12] [12] [12] ;
unsigned short arr_11 [12] [12] [12] ;
unsigned short arr_14 [12] [12] [12] ;
long long int arr_15 [12] [12] ;
int arr_22 [12] [12] ;
int arr_23 [12] [12] ;
unsigned char arr_26 [20] ;
unsigned char arr_3 [12] ;
int arr_8 [12] [12] [12] ;
int arr_19 [12] [12] [12] ;
unsigned char arr_20 [12] ;
long long int arr_25 [12] ;
long long int arr_28 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)39730;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 885289311;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1096159331;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -2026498334147644142LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)58060;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)50523 : (unsigned short)44556;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)6240;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)22026;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 5908698458760038749LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = 753835820;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = -1469059482;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2079635609;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 339258130 : -317656946;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)209 : (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = 7628578984492718720LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? -8984537171043379467LL : -4854568058479652098LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
