#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1790;
long long int var_3 = -3545308964502899331LL;
int var_5 = 1994077878;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)125;
unsigned char var_13 = (unsigned char)143;
long long int var_14 = 2470775861609027033LL;
signed char var_15 = (signed char)-33;
signed char var_16 = (signed char)-80;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-44;
_Bool arr_1 [20] [20] ;
unsigned short arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)52688;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
