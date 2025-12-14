#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1203723513973037525LL;
unsigned short var_1 = (unsigned short)23555;
unsigned int var_2 = 3189530001U;
int var_3 = 1927214494;
unsigned int var_4 = 3117186628U;
unsigned int var_5 = 16687195U;
unsigned char var_6 = (unsigned char)211;
int var_7 = -1337495828;
unsigned int var_8 = 2688148009U;
unsigned int var_9 = 471295778U;
int zero = 0;
unsigned char var_10 = (unsigned char)57;
unsigned short var_11 = (unsigned short)13405;
signed char var_12 = (signed char)9;
unsigned char var_13 = (unsigned char)223;
unsigned char var_14 = (unsigned char)61;
unsigned short var_15 = (unsigned short)49830;
unsigned short var_16 = (unsigned short)62173;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 4119083803U;
int var_19 = -2083738268;
unsigned int var_20 = 332021315U;
unsigned short var_21 = (unsigned short)65534;
unsigned int var_22 = 2068254097U;
long long int var_23 = 4897494728500664881LL;
unsigned short arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned int arr_10 [22] [22] ;
unsigned int arr_11 [22] ;
int arr_12 [22] ;
unsigned int arr_14 [22] ;
unsigned int arr_16 [22] [22] [22] [22] ;
unsigned char arr_17 [22] ;
long long int arr_20 [22] [22] [22] ;
unsigned long long int arr_21 [22] [22] ;
unsigned int arr_26 [22] [22] ;
unsigned char arr_2 [22] ;
unsigned int arr_3 [22] ;
int arr_4 [22] ;
unsigned int arr_9 [16] [16] ;
unsigned long long int arr_15 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)13625;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 394885774U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = 2018651260U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 2769339774U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 1715444103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 1273220786U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 754485166U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -6490960607265303594LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = 9483463933815351083ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = 2965940758U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2251954163U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 513866666;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 4283342334U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 6787203513314673524ULL : 1228665493406091635ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
