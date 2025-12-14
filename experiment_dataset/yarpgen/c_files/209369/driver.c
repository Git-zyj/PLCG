#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)17718;
unsigned short var_4 = (unsigned short)15735;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 6944030531027694821ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 4829983237597287696ULL;
unsigned int var_11 = 2193051618U;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)14829;
unsigned short var_15 = (unsigned short)29379;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12990484031565366678ULL;
unsigned short arr_0 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)18342;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
