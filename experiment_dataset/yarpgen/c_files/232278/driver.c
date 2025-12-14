#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 456538253U;
long long int var_8 = -5739318317022483880LL;
unsigned long long int var_14 = 5944182436781815074ULL;
unsigned int var_15 = 3928288596U;
int zero = 0;
long long int var_16 = 2414990017834495883LL;
long long int var_17 = 8857911437822623328LL;
int var_18 = -959962048;
unsigned int var_19 = 4188474849U;
int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1870285872;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
