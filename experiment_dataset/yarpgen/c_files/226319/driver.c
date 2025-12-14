#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
signed char var_1 = (signed char)-58;
long long int var_4 = 9190082370161003350LL;
int var_5 = -1576226873;
unsigned long long int var_8 = 6350347999557451355ULL;
short var_9 = (short)-20541;
int zero = 0;
signed char var_10 = (signed char)109;
unsigned long long int var_11 = 16957047906499410849ULL;
unsigned int var_12 = 799984877U;
short var_13 = (short)-13954;
short var_14 = (short)1991;
signed char var_15 = (signed char)59;
unsigned long long int var_16 = 11907183862987383726ULL;
signed char var_17 = (signed char)-52;
long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3408788519400438527LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
