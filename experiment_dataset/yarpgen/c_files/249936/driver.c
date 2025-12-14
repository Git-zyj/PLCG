#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)88;
unsigned long long int var_12 = 17442389291006787270ULL;
short var_13 = (short)-21728;
unsigned short var_16 = (unsigned short)42447;
int zero = 0;
signed char var_20 = (signed char)-28;
short var_21 = (short)25047;
long long int var_22 = -2179655058067908776LL;
unsigned long long int var_23 = 4681348798979056324ULL;
long long int var_24 = 7417266245252296964LL;
unsigned long long int var_25 = 2647971952615485704ULL;
unsigned char arr_0 [21] ;
_Bool arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)160 : (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 185654099U : 81864321U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52274 : (unsigned short)41978;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
