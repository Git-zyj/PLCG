#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
int var_1 = 677568434;
signed char var_2 = (signed char)-83;
int var_4 = -596298144;
signed char var_6 = (signed char)87;
short var_14 = (short)3712;
long long int var_15 = 444474271612026767LL;
unsigned short var_18 = (unsigned short)43749;
int zero = 0;
unsigned char var_20 = (unsigned char)129;
long long int var_21 = 6290752819912534381LL;
unsigned char var_22 = (unsigned char)239;
long long int var_23 = -3777390415052587142LL;
unsigned char var_24 = (unsigned char)172;
signed char var_25 = (signed char)-19;
long long int var_26 = -7225564329024124723LL;
unsigned char var_27 = (unsigned char)154;
unsigned char var_28 = (unsigned char)74;
int var_29 = -1274053061;
unsigned char var_30 = (unsigned char)29;
short var_31 = (short)31910;
int var_32 = -2036697692;
short arr_0 [21] [21] ;
int arr_1 [21] ;
unsigned char arr_2 [21] [21] ;
unsigned char arr_3 [21] ;
unsigned short arr_4 [21] [21] ;
int arr_6 [21] [21] [21] ;
unsigned char arr_7 [21] [21] [21] ;
long long int arr_9 [21] [21] ;
unsigned short arr_10 [21] [21] ;
signed char arr_13 [12] ;
short arr_15 [12] ;
short arr_20 [12] [12] ;
long long int arr_21 [15] [15] ;
short arr_22 [15] [15] ;
short arr_28 [15] ;
signed char arr_11 [21] [21] ;
unsigned char arr_24 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)25930;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 327619988;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)45443;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 521205455;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 3954480735909929900LL : 2269148476802306494LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)36837;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (short)18856;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (short)18092;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = 3254309831602387511LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-5463;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = (short)1255;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)135 : (unsigned char)240;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
