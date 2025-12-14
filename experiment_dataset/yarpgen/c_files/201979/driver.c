#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2899920056478310668LL;
unsigned short var_2 = (unsigned short)55227;
unsigned short var_3 = (unsigned short)31196;
signed char var_5 = (signed char)51;
unsigned short var_6 = (unsigned short)29025;
signed char var_9 = (signed char)-116;
short var_11 = (short)-19606;
int zero = 0;
int var_18 = 1705548880;
unsigned char var_19 = (unsigned char)55;
unsigned char var_20 = (unsigned char)244;
signed char arr_0 [12] ;
unsigned long long int arr_2 [12] ;
int arr_5 [10] ;
signed char arr_10 [24] ;
int arr_3 [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
unsigned short arr_7 [10] ;
unsigned short arr_8 [10] ;
unsigned long long int arr_13 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 16498172048435836881ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -853253573;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1081920821 : -818378189;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 15635992083419170235ULL : 96895769207235388ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65251 : (unsigned short)3374;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17051 : (unsigned short)29139;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15289582411074423989ULL : 7853059140046858662ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
