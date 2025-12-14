#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)91;
unsigned char var_5 = (unsigned char)124;
unsigned int var_6 = 1053960511U;
int var_7 = -938387183;
long long int var_11 = -4767616467643935363LL;
int zero = 0;
unsigned long long int var_13 = 7543547706073858412ULL;
signed char var_14 = (signed char)24;
short var_15 = (short)-236;
signed char var_16 = (signed char)-82;
_Bool var_17 = (_Bool)0;
unsigned int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1688824409U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
