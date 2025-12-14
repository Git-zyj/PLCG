#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34245;
int var_3 = -1152238836;
long long int var_5 = 429262529906880957LL;
int var_6 = -657741629;
int var_7 = -1100331626;
int var_8 = 131570653;
short var_9 = (short)22890;
unsigned short var_11 = (unsigned short)6901;
int zero = 0;
short var_15 = (short)-4556;
short var_16 = (short)-30261;
int var_17 = 580228823;
long long int var_18 = 5604532070717171391LL;
int var_19 = 588421378;
short var_20 = (short)26210;
long long int var_21 = -1893187584580103562LL;
short var_22 = (short)-22408;
short var_23 = (short)31489;
short var_24 = (short)9965;
short var_25 = (short)-32339;
long long int arr_1 [14] ;
int arr_7 [14] [14] [14] [14] ;
short arr_8 [14] [14] [14] [14] ;
short arr_9 [14] [14] [14] ;
unsigned short arr_11 [14] ;
unsigned int arr_19 [17] ;
short arr_20 [17] [17] ;
short arr_12 [14] [14] ;
unsigned int arr_13 [14] ;
long long int arr_16 [14] ;
short arr_17 [14] ;
long long int arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -2330871846473282629LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -1217868422;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-11869;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-27892;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned short)64201;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 2154133016U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-647;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (short)27681;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 3717465856U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 7096558899551414106LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (short)-16353;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = -3326045567168742441LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
