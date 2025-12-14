#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-23296;
unsigned char var_4 = (unsigned char)243;
long long int var_5 = -6505934060681138106LL;
int var_14 = -1018278989;
long long int var_18 = 4329245672915750941LL;
unsigned int var_19 = 856469152U;
int zero = 0;
long long int var_20 = -4483966218952506698LL;
short var_21 = (short)-9743;
signed char var_22 = (signed char)-11;
signed char var_23 = (signed char)61;
unsigned int var_24 = 416351528U;
unsigned short var_25 = (unsigned short)59044;
unsigned char var_26 = (unsigned char)211;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)117;
signed char var_29 = (signed char)76;
unsigned char var_30 = (unsigned char)192;
long long int var_31 = 4056480203370721208LL;
signed char var_32 = (signed char)23;
signed char var_33 = (signed char)-119;
unsigned char var_34 = (unsigned char)226;
long long int var_35 = 9068104998466406746LL;
long long int var_36 = 3165731376380149434LL;
unsigned long long int var_37 = 13021836683663705986ULL;
long long int var_38 = -1555064071251840299LL;
unsigned long long int arr_0 [25] ;
signed char arr_1 [25] [25] ;
unsigned int arr_5 [25] [25] ;
unsigned long long int arr_7 [25] ;
short arr_18 [25] [25] [25] ;
unsigned long long int arr_2 [25] [25] ;
unsigned int arr_19 [25] [25] ;
unsigned long long int arr_20 [25] [25] ;
int arr_28 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 16424757117364392332ULL : 13241873181801841856ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1350098341U : 3169330070U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 18431718297293116158ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)18120 : (short)-439;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 15822223195094655034ULL : 2451111872656793529ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 3982578509U : 3912795163U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 14551638558535439303ULL : 6661309934423467079ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 111588780 : -2040686672;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
