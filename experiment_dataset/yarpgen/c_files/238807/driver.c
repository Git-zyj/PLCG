#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 317226265;
int var_3 = -410925147;
unsigned int var_4 = 3565245839U;
long long int var_6 = 5269275813878710720LL;
unsigned int var_8 = 1767869466U;
unsigned int var_11 = 2898060965U;
int zero = 0;
unsigned long long int var_13 = 4173070401710683384ULL;
unsigned short var_14 = (unsigned short)50911;
short var_15 = (short)5212;
short var_16 = (short)-8040;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-6729;
unsigned long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 10040462623796595730ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
