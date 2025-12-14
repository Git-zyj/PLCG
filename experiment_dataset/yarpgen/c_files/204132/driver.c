#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-5493;
short var_4 = (short)-13301;
long long int var_13 = -7849939140585194024LL;
unsigned char var_15 = (unsigned char)8;
unsigned long long int var_16 = 17110725925613248892ULL;
unsigned int var_18 = 1338098569U;
long long int var_19 = 8161779901974039055LL;
int zero = 0;
signed char var_20 = (signed char)118;
unsigned char var_21 = (unsigned char)2;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1645822923U;
short var_24 = (short)13664;
unsigned short var_25 = (unsigned short)43989;
unsigned char var_26 = (unsigned char)237;
short arr_1 [18] [18] ;
long long int arr_4 [22] [22] ;
unsigned int arr_3 [18] ;
short arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)10779;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 876855841321097046LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1125031420U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)24467;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
