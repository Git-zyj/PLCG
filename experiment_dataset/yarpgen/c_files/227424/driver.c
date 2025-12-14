#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
short var_2 = (short)-22623;
int var_3 = 41271839;
int var_4 = -2065082;
unsigned char var_5 = (unsigned char)196;
short var_9 = (short)-7080;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 17426688108644252009ULL;
long long int var_17 = 3912757230973710375LL;
unsigned short var_18 = (unsigned short)17247;
long long int var_19 = -1229153391036264724LL;
int var_20 = -11356743;
unsigned int var_21 = 763306788U;
signed char var_22 = (signed char)-76;
unsigned long long int var_23 = 11088440265404031380ULL;
unsigned char var_24 = (unsigned char)231;
unsigned short arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
unsigned short arr_2 [23] [23] ;
unsigned short arr_3 [23] [23] ;
unsigned short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12448 : (unsigned short)21267;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)53947 : (unsigned short)18467;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)26010;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)831 : (unsigned short)9042;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
