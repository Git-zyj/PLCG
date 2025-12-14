#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3472;
unsigned char var_3 = (unsigned char)254;
int var_10 = 2118331194;
unsigned char var_11 = (unsigned char)252;
short var_12 = (short)6915;
signed char var_17 = (signed char)-78;
int zero = 0;
unsigned long long int var_19 = 3052690292357943711ULL;
unsigned int var_20 = 1937011312U;
int var_21 = 124220002;
unsigned long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 275107882718013223ULL : 14273914074485196101ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
