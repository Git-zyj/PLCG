#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 670019334;
int var_1 = -1491921506;
unsigned short var_5 = (unsigned short)60405;
int var_10 = -1705024997;
int zero = 0;
unsigned int var_14 = 762308395U;
unsigned long long int var_15 = 4538925227232984297ULL;
unsigned int var_16 = 140850900U;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2165955250U;
}

void checksum() {
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
