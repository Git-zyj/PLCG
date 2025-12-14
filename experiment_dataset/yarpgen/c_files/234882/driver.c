#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51621;
unsigned short var_5 = (unsigned short)15704;
unsigned char var_9 = (unsigned char)41;
int zero = 0;
unsigned char var_11 = (unsigned char)38;
unsigned char var_12 = (unsigned char)56;
unsigned char var_13 = (unsigned char)134;
unsigned char var_14 = (unsigned char)167;
unsigned short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)7548;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
