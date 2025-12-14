#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-43;
unsigned long long int var_3 = 17188044990924260876ULL;
int var_5 = 2120815225;
unsigned short var_8 = (unsigned short)53649;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6322879858528634775LL;
unsigned long long int var_11 = 6593563946470746951ULL;
long long int var_12 = 3943188640358477371LL;
signed char var_13 = (signed char)97;
int zero = 0;
long long int var_15 = -4844207528141392273LL;
int var_16 = 580578546;
unsigned long long int var_17 = 1132040847102988867ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -5342062104397976125LL;
long long int arr_6 [23] [23] ;
short arr_7 [23] ;
long long int arr_8 [23] [23] ;
unsigned long long int arr_12 [20] ;
long long int arr_17 [25] ;
unsigned char arr_20 [25] ;
unsigned short arr_5 [15] [15] [15] ;
unsigned char arr_9 [23] ;
unsigned short arr_10 [23] ;
unsigned short arr_13 [20] ;
int arr_14 [20] ;
unsigned short arr_15 [20] ;
int arr_16 [20] ;
long long int arr_21 [25] [25] [25] ;
int arr_22 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -4175378144116375392LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-5073;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -445477675134358178LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 12639402368602987268ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 2777530069526770996LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)63902 : (unsigned short)15354;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned short)33749;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (unsigned short)25535;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = 901565256;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned short)15522;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = 1811598590;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 6495169952965781930LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = -1066754955;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
