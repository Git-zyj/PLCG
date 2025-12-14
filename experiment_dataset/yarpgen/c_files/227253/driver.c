#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21274;
int var_5 = -2076929195;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 10634231618254399739ULL;
short var_21 = (short)-4858;
unsigned int var_22 = 88913713U;
unsigned int var_23 = 1949331577U;
unsigned int var_24 = 3565675058U;
short arr_0 [11] ;
unsigned long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)1905 : (short)31457;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 4577102680049658882ULL;
}

void checksum() {
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
