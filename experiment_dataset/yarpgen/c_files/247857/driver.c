#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 873210701;
signed char var_7 = (signed char)-48;
unsigned char var_13 = (unsigned char)53;
int zero = 0;
signed char var_19 = (signed char)-32;
signed char var_20 = (signed char)79;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2122935858U;
unsigned short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60309 : (unsigned short)45834;
}

void checksum() {
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
