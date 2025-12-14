#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13414086135628243148ULL;
unsigned long long int var_1 = 12193481150322499229ULL;
unsigned long long int var_4 = 4531390916446689392ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 6513046947223817395ULL;
unsigned int var_8 = 3412349304U;
long long int var_9 = 4917069741167629596LL;
unsigned long long int var_10 = 7779322279251909135ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3200929755571289784LL;
unsigned long long int var_14 = 7045856528536039630ULL;
unsigned short var_15 = (unsigned short)11903;
unsigned char var_16 = (unsigned char)251;
signed char arr_0 [22] ;
long long int arr_1 [22] ;
unsigned short arr_4 [13] ;
signed char arr_5 [13] ;
int arr_9 [13] ;
unsigned long long int arr_2 [22] ;
signed char arr_6 [13] ;
_Bool arr_10 [13] ;
unsigned short arr_11 [13] ;
long long int arr_12 [13] [13] ;
long long int arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 4784908664881987586LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1937 : (unsigned short)47352;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)57 : (signed char)5;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -960913348;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 102152639675471262ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-125 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (unsigned short)7214;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = -7044157020776399668LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 6141659631886952283LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
