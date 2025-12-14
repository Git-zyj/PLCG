#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
unsigned char var_1 = (unsigned char)52;
long long int var_3 = 8006562546630552942LL;
signed char var_4 = (signed char)102;
unsigned char var_5 = (unsigned char)24;
unsigned int var_6 = 985857530U;
signed char var_7 = (signed char)-83;
unsigned short var_8 = (unsigned short)62084;
long long int var_12 = -3908721151296775341LL;
signed char var_13 = (signed char)-112;
unsigned char var_14 = (unsigned char)173;
int var_15 = 2074934292;
signed char var_16 = (signed char)-57;
long long int var_17 = 4923731660842675596LL;
long long int var_18 = 8108526578552706549LL;
int zero = 0;
signed char var_19 = (signed char)34;
long long int var_20 = 2320029074363556301LL;
signed char var_21 = (signed char)97;
long long int var_22 = 1436167000107750186LL;
unsigned int var_23 = 696105896U;
unsigned short var_24 = (unsigned short)8729;
unsigned int var_25 = 2336094128U;
signed char var_26 = (signed char)92;
signed char var_27 = (signed char)93;
unsigned int var_28 = 874997020U;
signed char var_29 = (signed char)-97;
unsigned int var_30 = 527335144U;
int var_31 = 166894813;
long long int var_32 = -714095668202895245LL;
_Bool var_33 = (_Bool)0;
unsigned short arr_0 [10] ;
unsigned int arr_1 [10] ;
short arr_6 [23] ;
long long int arr_7 [23] ;
unsigned char arr_10 [12] [12] ;
signed char arr_11 [12] [12] ;
long long int arr_14 [13] ;
long long int arr_23 [13] [13] [13] [13] ;
signed char arr_4 [10] ;
signed char arr_12 [12] [12] ;
int arr_13 [12] ;
long long int arr_26 [13] [13] [13] [13] [13] ;
_Bool arr_27 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)9313;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 4262500294U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)16253;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 9062736746190436256LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 6251858315389432934LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -4431063776112572277LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = -500352761;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 7591267836871826450LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
