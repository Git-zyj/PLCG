#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
unsigned char var_3 = (unsigned char)168;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2706418683U;
unsigned long long int var_6 = 2748383844814164128ULL;
short var_7 = (short)4064;
long long int var_8 = -4393115306581569873LL;
unsigned long long int var_9 = 17843051610338223365ULL;
long long int var_10 = 3532646297024694630LL;
unsigned char var_13 = (unsigned char)53;
int var_14 = 195290304;
short var_15 = (short)2908;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-52;
signed char var_18 = (signed char)-53;
int zero = 0;
long long int var_19 = 2036777540661519469LL;
int var_20 = -246454501;
signed char var_21 = (signed char)38;
int var_22 = 2069267985;
unsigned char var_23 = (unsigned char)43;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)77;
int var_27 = -2052283097;
unsigned short var_28 = (unsigned short)24325;
unsigned int var_29 = 2076894837U;
unsigned short var_30 = (unsigned short)57266;
signed char var_31 = (signed char)-67;
signed char var_32 = (signed char)26;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 943784160U;
int var_35 = 2116085397;
unsigned long long int var_36 = 8128451949376353048ULL;
unsigned char arr_0 [10] [10] ;
_Bool arr_2 [10] ;
unsigned long long int arr_3 [11] ;
signed char arr_4 [11] ;
unsigned long long int arr_5 [11] ;
short arr_7 [14] ;
short arr_8 [25] ;
int arr_9 [25] ;
unsigned long long int arr_10 [25] ;
short arr_11 [25] [25] ;
int arr_12 [25] [25] ;
short arr_15 [11] [11] ;
unsigned long long int arr_13 [25] ;
unsigned long long int arr_14 [25] [25] ;
unsigned char arr_17 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 12098853200282655075ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 17350232130412916385ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)-16087;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)2589;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = -917988170;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 9273938663088148625ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (short)16796;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = -1209362599;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (short)19373;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 16971835277935240097ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = 10822551248454775825ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (unsigned char)79;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
