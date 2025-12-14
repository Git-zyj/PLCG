#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -783168502274342371LL;
int var_2 = 197382371;
unsigned char var_3 = (unsigned char)169;
unsigned char var_5 = (unsigned char)218;
signed char var_8 = (signed char)110;
long long int var_9 = -6370380088662949975LL;
unsigned long long int var_10 = 6265324287006151619ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)38;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-21072;
unsigned int var_15 = 3401280561U;
signed char arr_0 [18] ;
signed char arr_2 [18] [18] ;
short arr_4 [18] ;
unsigned char arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)29967;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)168;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
