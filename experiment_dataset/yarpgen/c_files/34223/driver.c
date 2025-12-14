#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2374031823286191094ULL;
unsigned long long int var_3 = 15923222001797606008ULL;
unsigned int var_4 = 806039879U;
int var_10 = 2079854477;
int zero = 0;
unsigned char var_11 = (unsigned char)208;
unsigned short var_12 = (unsigned short)62904;
unsigned int var_13 = 3065833130U;
unsigned char var_14 = (unsigned char)214;
unsigned int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 3036270465U;
}

void checksum() {
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
