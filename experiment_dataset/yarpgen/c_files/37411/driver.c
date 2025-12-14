#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3157487919533049343LL;
unsigned short var_2 = (unsigned short)28441;
unsigned short var_4 = (unsigned short)22617;
short var_5 = (short)-19207;
unsigned int var_6 = 3332304799U;
signed char var_10 = (signed char)64;
int zero = 0;
unsigned char var_12 = (unsigned char)253;
unsigned short var_13 = (unsigned short)60651;
short var_14 = (short)-23077;
unsigned char var_15 = (unsigned char)50;
signed char arr_0 [12] [12] ;
short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-19681;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
