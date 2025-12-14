#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1627923484;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 17538258478660937591ULL;
unsigned long long int var_3 = 5514146195672197785ULL;
int var_4 = -2125658563;
unsigned long long int var_5 = 1466311015147114508ULL;
_Bool var_6 = (_Bool)0;
int var_7 = -145103708;
unsigned int var_8 = 140064572U;
unsigned long long int var_10 = 7480190470270859499ULL;
short var_11 = (short)12301;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 9324155796016644932ULL;
unsigned int var_15 = 3127426116U;
long long int var_16 = 8744649120689060210LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)7049;
unsigned int var_19 = 3316488687U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)176;
signed char var_22 = (signed char)104;
unsigned int var_23 = 989553493U;
unsigned int arr_0 [11] ;
_Bool arr_1 [11] ;
int arr_2 [11] ;
unsigned int arr_3 [11] [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1237918296U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 194852108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 448714064U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
