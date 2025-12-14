#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 2692093007124431098ULL;
unsigned long long int var_4 = 11438249920937620152ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)1;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)98;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned short arr_0 [25] ;
_Bool arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)3867;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
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
