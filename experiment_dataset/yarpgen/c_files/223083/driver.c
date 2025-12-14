#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13166;
long long int var_10 = 6329466085092611795LL;
unsigned short var_12 = (unsigned short)38326;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)47707;
unsigned char var_17 = (unsigned char)186;
int zero = 0;
short var_20 = (short)11394;
unsigned long long int var_21 = 18277191018102613204ULL;
unsigned short var_22 = (unsigned short)41776;
unsigned char var_23 = (unsigned char)92;
long long int var_24 = 2192089402938667835LL;
unsigned int var_25 = 4174089995U;
short arr_1 [21] ;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)9889;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)24;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
