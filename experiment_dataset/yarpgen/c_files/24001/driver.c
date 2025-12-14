#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2587268794U;
signed char var_7 = (signed char)-30;
unsigned char var_9 = (unsigned char)209;
short var_11 = (short)26750;
int var_13 = 259368069;
int zero = 0;
unsigned long long int var_15 = 13414911896448787533ULL;
unsigned int var_16 = 784815146U;
int var_17 = -274913618;
int var_18 = 1595274476;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 6367305268482242578LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
