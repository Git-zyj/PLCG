#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 140564821247884902ULL;
_Bool var_3 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3930538431U;
unsigned long long int var_19 = 10241899380043226607ULL;
int var_20 = -1477213338;
long long int var_21 = -3317078096605256381LL;
short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)4394 : (short)-16278;
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
