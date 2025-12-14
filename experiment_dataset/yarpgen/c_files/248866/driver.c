#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5916068605146389068LL;
unsigned long long int var_11 = 9115722749782511544ULL;
signed char var_12 = (signed char)12;
unsigned char var_16 = (unsigned char)148;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1106849142;
signed char var_19 = (signed char)9;
long long int var_20 = 855052028780836392LL;
_Bool var_21 = (_Bool)0;
_Bool arr_1 [19] ;
unsigned char arr_4 [19] [19] [19] ;
unsigned short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)42304;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
