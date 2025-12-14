#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_6 = (short)32184;
unsigned short var_10 = (unsigned short)24640;
int zero = 0;
unsigned long long int var_20 = 14780766127763290693ULL;
unsigned int var_21 = 3165798127U;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2245073569U;
long long int arr_1 [24] ;
signed char arr_2 [24] ;
_Bool arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -990543592993138212LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
