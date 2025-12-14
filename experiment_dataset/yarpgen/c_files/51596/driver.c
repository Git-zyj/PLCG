#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14330854501482660339ULL;
_Bool var_8 = (_Bool)1;
int var_11 = 730515768;
int zero = 0;
short var_12 = (short)21206;
unsigned long long int var_13 = 13851457441170910185ULL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 9653554412781611500ULL;
}

void checksum() {
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
