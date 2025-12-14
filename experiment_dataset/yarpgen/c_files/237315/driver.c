#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1683772930573960300ULL;
unsigned int var_3 = 4079781427U;
signed char var_7 = (signed char)-98;
unsigned long long int var_12 = 12759358106707454059ULL;
unsigned long long int var_14 = 17277810141850264895ULL;
int zero = 0;
long long int var_15 = 3281605876349092499LL;
unsigned short var_16 = (unsigned short)45651;
long long int var_17 = 6881825358159163332LL;
signed char var_18 = (signed char)123;
short var_19 = (short)-8411;
_Bool arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
