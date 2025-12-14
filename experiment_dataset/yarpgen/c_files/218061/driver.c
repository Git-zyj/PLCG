#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)102;
unsigned int var_9 = 3533811412U;
signed char var_10 = (signed char)117;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-32647;
short var_18 = (short)13128;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2251468823U;
signed char arr_0 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-57;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
