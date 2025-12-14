#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)65;
unsigned long long int var_2 = 1046885990848025227ULL;
long long int var_6 = -5872922190426266417LL;
signed char var_9 = (signed char)-49;
int zero = 0;
signed char var_10 = (signed char)77;
unsigned int var_11 = 2173901840U;
unsigned long long int var_12 = 8854377551950226397ULL;
int var_13 = -625430520;
_Bool var_14 = (_Bool)0;
unsigned short arr_0 [13] [13] ;
short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)51690;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)24147;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
