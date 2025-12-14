#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13397460111787094631ULL;
signed char var_3 = (signed char)125;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)22386;
unsigned short var_12 = (unsigned short)49258;
int var_13 = -699680584;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5730936205213158178ULL;
short var_16 = (short)-24624;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)199;
unsigned short var_19 = (unsigned short)42282;
unsigned long long int var_20 = 137246564052535281ULL;
unsigned int var_21 = 3257770419U;
signed char var_22 = (signed char)110;
unsigned int var_23 = 2529633104U;
signed char var_24 = (signed char)104;
unsigned long long int arr_11 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11572058769221513345ULL : 7144283489595839447ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
