#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-18079;
long long int var_8 = 246405837500731091LL;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)60961;
int zero = 0;
signed char var_14 = (signed char)-23;
signed char var_15 = (signed char)51;
signed char var_16 = (signed char)-32;
_Bool var_17 = (_Bool)1;
signed char arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (signed char)105;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
