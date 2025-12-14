#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5295672132430277316ULL;
long long int var_5 = 7457823604851839973LL;
short var_8 = (short)-5099;
unsigned long long int var_11 = 10773483445400685697ULL;
int zero = 0;
unsigned long long int var_12 = 10526940663159734870ULL;
unsigned long long int var_13 = 14988319327903632516ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3190728394U;
signed char var_16 = (signed char)2;
unsigned char var_17 = (unsigned char)77;
long long int arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_4 [14] [14] [14] ;
signed char arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3682416353916191983LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 14008574303403552559ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 14423746786760092533ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)59;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
