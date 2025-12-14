#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-16697;
signed char var_9 = (signed char)125;
unsigned char var_10 = (unsigned char)72;
int zero = 0;
int var_18 = -766846567;
short var_19 = (short)-27169;
signed char var_20 = (signed char)23;
unsigned char var_21 = (unsigned char)90;
unsigned short var_22 = (unsigned short)38267;
short arr_0 [13] ;
int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)18861;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1744995434;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
