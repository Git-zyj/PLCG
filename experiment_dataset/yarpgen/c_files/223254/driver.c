#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 48609531;
unsigned char var_2 = (unsigned char)245;
long long int var_3 = 2632052289788899032LL;
unsigned int var_8 = 1319519911U;
unsigned int var_9 = 1448564691U;
unsigned char var_10 = (unsigned char)67;
unsigned int var_12 = 1924946635U;
int zero = 0;
unsigned char var_13 = (unsigned char)211;
unsigned char var_14 = (unsigned char)216;
long long int var_15 = 1628273584737057256LL;
unsigned int var_16 = 1938051823U;
long long int arr_1 [22] ;
int arr_4 [22] [22] [22] ;
unsigned char arr_5 [22] [22] [22] ;
_Bool arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3344387996226585729LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1673796457;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
