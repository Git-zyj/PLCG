#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)17949;
unsigned char var_7 = (unsigned char)94;
short var_9 = (short)25965;
unsigned int var_11 = 3319257363U;
signed char var_13 = (signed char)79;
int zero = 0;
long long int var_20 = 6400803740294411348LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 6763580215067379762ULL;
unsigned char var_23 = (unsigned char)128;
unsigned long long int var_24 = 11243114181630451711ULL;
unsigned long long int var_25 = 11168645103976049702ULL;
long long int var_26 = 4301837443705403835LL;
unsigned short var_27 = (unsigned short)52882;
unsigned short arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
_Bool arr_2 [21] ;
unsigned long long int arr_6 [10] ;
unsigned short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)38531;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 14151690997943278744ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)36777;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
