#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)15;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-10084;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-31534;
int var_9 = 220057807;
int zero = 0;
unsigned char var_12 = (unsigned char)78;
unsigned int var_13 = 1043057954U;
int var_14 = -1560774488;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 204938220U;
unsigned char var_17 = (unsigned char)195;
_Bool var_18 = (_Bool)1;
int var_19 = 609168985;
short var_20 = (short)26921;
signed char var_21 = (signed char)88;
int var_22 = 1294877303;
signed char arr_0 [15] [15] ;
int arr_1 [15] ;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_3 [15] [15] ;
short arr_10 [15] ;
_Bool arr_13 [23] [23] ;
long long int arr_14 [23] [23] ;
_Bool arr_4 [15] [15] ;
_Bool arr_8 [12] [12] ;
signed char arr_12 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1665772921;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 5183091669384519085ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 3393859118777790477ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)-29302;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = -3596512129366830023LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-41 : (signed char)-79;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
