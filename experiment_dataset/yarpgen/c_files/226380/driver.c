#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2582003362U;
unsigned char var_9 = (unsigned char)117;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-34;
unsigned char var_19 = (unsigned char)60;
int zero = 0;
unsigned long long int var_20 = 2479351460435691260ULL;
unsigned short var_21 = (unsigned short)11989;
unsigned short var_22 = (unsigned short)25932;
long long int var_23 = -2032490218143189416LL;
unsigned char var_24 = (unsigned char)156;
_Bool arr_1 [15] ;
long long int arr_2 [15] ;
unsigned short arr_4 [15] ;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -4077504070535335624LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)46357;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)45221;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
