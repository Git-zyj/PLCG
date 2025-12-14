#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6259103298488259684LL;
long long int var_1 = 3333428924188675983LL;
signed char var_4 = (signed char)77;
short var_5 = (short)303;
unsigned short var_7 = (unsigned short)11243;
int var_9 = -1148231203;
unsigned char var_10 = (unsigned char)254;
unsigned short var_11 = (unsigned short)11695;
int zero = 0;
short var_12 = (short)20933;
int var_13 = -780692908;
long long int var_14 = -5705128327031730357LL;
int var_15 = -2120651706;
signed char var_16 = (signed char)-10;
long long int var_17 = 8724832320214343305LL;
unsigned char var_18 = (unsigned char)140;
int var_19 = 396257650;
int var_20 = -1727413742;
short arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] ;
unsigned int arr_3 [19] ;
long long int arr_4 [25] ;
unsigned short arr_5 [25] [25] ;
_Bool arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)2938;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)13031;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)19758;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 3123069648U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 5737605167865434081LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)2271;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
