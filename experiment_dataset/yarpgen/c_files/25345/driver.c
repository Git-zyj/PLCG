#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3759471808540745272LL;
long long int var_6 = 1000845517249309406LL;
unsigned short var_7 = (unsigned short)14955;
unsigned short var_12 = (unsigned short)18292;
int zero = 0;
short var_13 = (short)6653;
unsigned short var_14 = (unsigned short)46039;
long long int var_15 = -7634695738685585251LL;
signed char var_16 = (signed char)94;
unsigned short arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)44775;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
