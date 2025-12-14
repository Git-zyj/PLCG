#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 454553774U;
unsigned short var_10 = (unsigned short)41465;
long long int var_13 = -7688773566234391868LL;
int zero = 0;
signed char var_18 = (signed char)52;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)49462;
unsigned short var_21 = (unsigned short)49252;
_Bool arr_0 [17] ;
unsigned short arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)34207;
}

void checksum() {
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
