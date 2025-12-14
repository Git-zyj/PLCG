#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 842263681;
unsigned short var_1 = (unsigned short)58438;
unsigned long long int var_2 = 2546986301103105271ULL;
unsigned char var_4 = (unsigned char)226;
int var_5 = 775173736;
short var_6 = (short)-27525;
int var_7 = -1895889371;
_Bool var_9 = (_Bool)1;
short var_11 = (short)5660;
unsigned short var_12 = (unsigned short)19353;
int var_13 = 1220883019;
unsigned char var_15 = (unsigned char)28;
int zero = 0;
unsigned short var_18 = (unsigned short)4150;
_Bool var_19 = (_Bool)1;
int var_20 = -716219103;
short var_21 = (short)-224;
signed char var_22 = (signed char)23;
int var_23 = -1627780684;
short arr_1 [18] ;
unsigned short arr_2 [18] ;
signed char arr_3 [18] ;
short arr_7 [10] ;
signed char arr_8 [10] ;
short arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-25131;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)59289;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)-6317;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)28991;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
