#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 835612886U;
long long int var_6 = 4245709935940580150LL;
unsigned short var_9 = (unsigned short)53802;
unsigned short var_10 = (unsigned short)24887;
unsigned long long int var_11 = 3565885553649255264ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)19;
long long int var_13 = -5844628223134567533LL;
unsigned short var_14 = (unsigned short)33930;
short arr_1 [16] [16] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)25983;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)186;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
