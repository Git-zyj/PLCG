#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8645291961259429397LL;
long long int var_1 = 1696280340001435858LL;
unsigned char var_2 = (unsigned char)183;
unsigned char var_3 = (unsigned char)117;
signed char var_4 = (signed char)37;
int var_5 = 518375304;
unsigned char var_6 = (unsigned char)38;
long long int var_8 = 4578393142544903141LL;
unsigned char var_10 = (unsigned char)17;
unsigned char var_11 = (unsigned char)35;
int zero = 0;
long long int var_12 = -4445826605762087543LL;
unsigned char var_13 = (unsigned char)87;
signed char var_14 = (signed char)91;
signed char var_15 = (signed char)61;
long long int var_16 = -2008987176782264654LL;
signed char arr_5 [15] [15] ;
signed char arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)105;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
