#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2125117778;
unsigned long long int var_1 = 3913541027271942068ULL;
unsigned long long int var_2 = 16976633389666415762ULL;
unsigned long long int var_3 = 15256698523022003363ULL;
int var_4 = 1817975099;
int var_9 = 1821766184;
int var_11 = -1832794256;
unsigned long long int var_12 = 11813894172264237358ULL;
int var_14 = -1806255696;
unsigned long long int var_15 = 2640716553860798721ULL;
int zero = 0;
int var_17 = 1743976599;
long long int var_18 = 2477049049299916799LL;
unsigned long long int var_19 = 9618357384716374141ULL;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1407221986;
}

void checksum() {
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
