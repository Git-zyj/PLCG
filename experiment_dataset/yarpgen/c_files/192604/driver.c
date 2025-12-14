#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1321229173572329539ULL;
int var_1 = 1858887484;
short var_2 = (short)-2777;
unsigned int var_3 = 2243196023U;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)15493;
unsigned int var_7 = 583055809U;
unsigned int var_8 = 399480449U;
int var_9 = -1265107258;
int var_10 = -2084528541;
unsigned long long int var_12 = 4377334376336203154ULL;
short var_13 = (short)-28674;
unsigned long long int var_14 = 8460640732810066307ULL;
unsigned char var_15 = (unsigned char)177;
unsigned long long int var_16 = 14095977863762686967ULL;
unsigned char var_18 = (unsigned char)94;
int zero = 0;
unsigned long long int var_20 = 4857878660399930822ULL;
signed char var_21 = (signed char)-103;
unsigned int var_22 = 1535170138U;
unsigned int var_23 = 4110258974U;
_Bool var_24 = (_Bool)1;
unsigned char arr_4 [24] [24] ;
unsigned int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 103442453U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
