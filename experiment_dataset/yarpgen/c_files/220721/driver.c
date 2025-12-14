#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
int var_1 = -1329457467;
unsigned short var_4 = (unsigned short)13267;
_Bool var_5 = (_Bool)1;
long long int var_11 = 8398663151447317274LL;
unsigned char var_14 = (unsigned char)26;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-77;
int var_17 = 471186809;
unsigned char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)72;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
