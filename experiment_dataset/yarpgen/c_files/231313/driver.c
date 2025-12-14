#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)79;
unsigned short var_6 = (unsigned short)7623;
signed char var_8 = (signed char)42;
signed char var_10 = (signed char)25;
unsigned short var_14 = (unsigned short)35166;
int zero = 0;
long long int var_15 = -3039646656271467645LL;
unsigned long long int var_16 = 80453224431831797ULL;
long long int var_17 = 7034632487150129994LL;
unsigned int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1283727731U;
}

void checksum() {
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
