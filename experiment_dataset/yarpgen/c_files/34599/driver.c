#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -873950957851426689LL;
short var_8 = (short)-16834;
long long int var_11 = -8982114477001966063LL;
unsigned int var_12 = 231039746U;
unsigned long long int var_13 = 7172766019330743770ULL;
short var_15 = (short)-2380;
int zero = 0;
unsigned char var_19 = (unsigned char)175;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 618867323U;
unsigned long long int var_23 = 15891760457909415823ULL;
int var_24 = 462711975;
unsigned int arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
int arr_3 [12] ;
short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 260038896U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1248781357 : 987538250;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-29899 : (short)9137;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
