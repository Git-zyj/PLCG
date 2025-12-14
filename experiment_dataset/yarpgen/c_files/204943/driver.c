#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4083661501049656084LL;
unsigned long long int var_1 = 5421700110344474141ULL;
unsigned long long int var_2 = 16479957470242654864ULL;
long long int var_3 = 7075838331201671379LL;
unsigned long long int var_4 = 10808872411804398810ULL;
unsigned short var_5 = (unsigned short)32496;
short var_6 = (short)-21762;
long long int var_7 = 8262832004203257783LL;
int var_8 = 1312441798;
unsigned short var_9 = (unsigned short)24592;
int zero = 0;
unsigned long long int var_10 = 2465199350778134748ULL;
unsigned int var_11 = 3895611755U;
int var_12 = 2094770726;
int var_13 = 341557956;
unsigned long long int var_14 = 13761642513747178219ULL;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)84 : (signed char)25;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
