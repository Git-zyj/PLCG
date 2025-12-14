#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17007570400690633539ULL;
unsigned long long int var_4 = 532062043453924401ULL;
unsigned long long int var_11 = 16053525724569944560ULL;
int zero = 0;
unsigned long long int var_13 = 13375049763612005084ULL;
unsigned long long int var_14 = 13909137797626110740ULL;
unsigned long long int var_15 = 10324793434228606770ULL;
unsigned long long int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 7776631047531408852ULL;
}

void checksum() {
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
