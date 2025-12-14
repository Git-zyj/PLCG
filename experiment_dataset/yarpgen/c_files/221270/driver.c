#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11023;
unsigned int var_2 = 70029441U;
int zero = 0;
long long int var_11 = -1027829858355032483LL;
long long int var_12 = 686713678480285569LL;
long long int var_13 = 2805612068156063437LL;
long long int var_14 = -5798403559016178045LL;
_Bool var_15 = (_Bool)0;
int arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1805112569;
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
