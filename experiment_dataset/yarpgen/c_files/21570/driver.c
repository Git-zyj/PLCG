#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1370522800;
int var_5 = -2026423743;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1166207550U;
long long int var_8 = -2838157677325746990LL;
int var_9 = -1602213611;
unsigned long long int var_10 = 11395480784424700558ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)209;
long long int var_16 = -7951512108414091906LL;
long long int var_17 = -216296776092484577LL;
unsigned char arr_0 [13] ;
_Bool arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
