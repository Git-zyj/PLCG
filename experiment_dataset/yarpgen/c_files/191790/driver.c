#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
unsigned int var_1 = 188217033U;
unsigned long long int var_2 = 10225613173423199214ULL;
long long int var_3 = 666908120591700274LL;
unsigned long long int var_4 = 8546961308438688209ULL;
short var_5 = (short)28295;
unsigned short var_6 = (unsigned short)20425;
short var_7 = (short)19223;
long long int var_8 = 2411938726625614380LL;
short var_9 = (short)-19256;
unsigned short var_11 = (unsigned short)55894;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)11072;
int var_14 = -1549772476;
unsigned char var_15 = (unsigned char)15;
signed char var_16 = (signed char)-60;
unsigned short arr_0 [17] ;
unsigned char arr_2 [17] [17] ;
signed char arr_9 [13] ;
unsigned long long int arr_15 [24] [24] ;
short arr_19 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)16533;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-56 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = 3611962086561305185ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = (short)16545;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
