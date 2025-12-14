#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12199;
int var_5 = 1141343926;
long long int var_9 = -3923690611842963854LL;
unsigned short var_12 = (unsigned short)26312;
unsigned int var_15 = 4200145370U;
int zero = 0;
unsigned short var_17 = (unsigned short)39290;
int var_18 = -1235940443;
unsigned long long int var_19 = 9284542703696393025ULL;
unsigned long long int var_20 = 2105798315112231545ULL;
short var_21 = (short)-8466;
short arr_1 [19] [19] ;
short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)2974;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-20827;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
