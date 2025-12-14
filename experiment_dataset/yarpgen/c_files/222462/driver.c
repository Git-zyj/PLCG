#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 741339624;
unsigned short var_2 = (unsigned short)21302;
unsigned short var_3 = (unsigned short)2392;
_Bool var_9 = (_Bool)0;
signed char var_14 = (signed char)35;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_17 = -7852189255096226184LL;
short var_18 = (short)2063;
signed char var_19 = (signed char)-116;
unsigned int arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 3480386320U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
