#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19899;
int var_1 = -2062839859;
unsigned short var_5 = (unsigned short)52599;
long long int var_6 = 7334430046335161215LL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)19;
long long int var_10 = -815416608064424938LL;
signed char var_11 = (signed char)122;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)64;
long long int var_14 = 4427668276977243834LL;
int var_15 = -983754362;
unsigned short var_16 = (unsigned short)5762;
unsigned short arr_2 [18] [18] [18] ;
short arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)59441;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)28850;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
