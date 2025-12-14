#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
int var_4 = 186963702;
long long int var_7 = -2476395952682544411LL;
unsigned long long int var_8 = 9509808753770952215ULL;
unsigned short var_10 = (unsigned short)31775;
signed char var_11 = (signed char)-95;
int var_14 = -223135438;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)22;
int zero = 0;
unsigned int var_17 = 1980319917U;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 10619551632167588920ULL;
int var_20 = -874486808;
signed char var_21 = (signed char)-100;
unsigned short arr_1 [10] ;
int arr_2 [10] ;
unsigned short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7173 : (unsigned short)44633;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1003065245;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53408 : (unsigned short)15219;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
