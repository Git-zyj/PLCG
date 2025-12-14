#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9605648721503257865ULL;
_Bool var_6 = (_Bool)0;
long long int var_8 = 7455238636464774385LL;
short var_9 = (short)-22984;
unsigned long long int var_13 = 7668797071401503739ULL;
int zero = 0;
unsigned int var_18 = 1460218361U;
unsigned int var_19 = 4176947154U;
unsigned short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36183 : (unsigned short)43443;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
