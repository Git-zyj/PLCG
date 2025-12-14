#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6505989304912777478LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 6782971082970667380ULL;
_Bool var_7 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2765613855U;
unsigned int var_18 = 3373203152U;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
short var_22 = (short)32195;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 10886086398511917832ULL;
_Bool arr_1 [18] ;
_Bool arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
