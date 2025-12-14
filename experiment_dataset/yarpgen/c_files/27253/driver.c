#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1149317899541042190LL;
signed char var_1 = (signed char)-42;
long long int var_2 = -1925022649765884293LL;
unsigned long long int var_9 = 6290683234947827660ULL;
signed char var_11 = (signed char)68;
unsigned int var_13 = 1262425961U;
unsigned int var_14 = 362698657U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3726967885U;
unsigned short var_20 = (unsigned short)23643;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
long long int var_23 = 3460178477775892255LL;
_Bool var_24 = (_Bool)1;
_Bool arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)54711;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)213;
}

void checksum() {
    hash(&seed, var_19);
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
