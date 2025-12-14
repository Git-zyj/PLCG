#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16729;
unsigned char var_2 = (unsigned char)177;
unsigned long long int var_4 = 13923352992944127650ULL;
unsigned long long int var_9 = 8670470907514231922ULL;
int zero = 0;
int var_10 = -1048291418;
signed char var_11 = (signed char)-3;
unsigned char var_12 = (unsigned char)83;
unsigned short var_13 = (unsigned short)36588;
unsigned short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)11061;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
