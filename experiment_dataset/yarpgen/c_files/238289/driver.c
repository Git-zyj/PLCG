#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5726406507788695428LL;
int var_5 = 2047242517;
int zero = 0;
unsigned short var_11 = (unsigned short)22472;
signed char var_12 = (signed char)69;
unsigned short var_13 = (unsigned short)7958;
short var_14 = (short)11895;
signed char var_15 = (signed char)123;
signed char arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)88;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
