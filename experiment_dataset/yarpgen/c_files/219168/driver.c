#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)32580;
unsigned int var_7 = 1770000046U;
signed char var_15 = (signed char)117;
int zero = 0;
unsigned short var_16 = (unsigned short)28618;
int var_17 = 86682337;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)32;
unsigned char var_20 = (unsigned char)168;
unsigned long long int var_21 = 15798860548728869085ULL;
unsigned int var_22 = 1120530915U;
signed char var_23 = (signed char)111;
unsigned char var_24 = (unsigned char)27;
unsigned char arr_0 [23] [23] ;
unsigned char arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)15;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
