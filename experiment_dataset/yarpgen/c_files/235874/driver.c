#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)53;
unsigned char var_4 = (unsigned char)247;
unsigned char var_8 = (unsigned char)183;
unsigned char var_9 = (unsigned char)216;
unsigned char var_10 = (unsigned char)204;
unsigned char var_13 = (unsigned char)218;
unsigned char var_19 = (unsigned char)71;
int zero = 0;
unsigned char var_20 = (unsigned char)31;
unsigned char var_21 = (unsigned char)93;
unsigned char var_22 = (unsigned char)28;
unsigned char var_23 = (unsigned char)209;
unsigned char var_24 = (unsigned char)166;
unsigned char var_25 = (unsigned char)156;
unsigned char arr_2 [10] ;
unsigned char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)12 : (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)248;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
