#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11205523788216845862ULL;
unsigned int var_3 = 3906033418U;
short var_4 = (short)4391;
unsigned int var_6 = 2476156551U;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-2913;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1909872063112761775ULL;
long long int var_14 = -7708885910298474993LL;
int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1945041969;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
