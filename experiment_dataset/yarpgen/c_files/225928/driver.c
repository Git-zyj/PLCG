#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4974145048545643645LL;
long long int var_3 = 8539503713967126450LL;
unsigned int var_4 = 2870542177U;
long long int var_8 = -4977660859049023053LL;
int zero = 0;
int var_19 = -742281636;
short var_20 = (short)19606;
unsigned char var_21 = (unsigned char)143;
long long int var_22 = 2062318470179121530LL;
unsigned int var_23 = 4185437643U;
unsigned int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1720204492U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
