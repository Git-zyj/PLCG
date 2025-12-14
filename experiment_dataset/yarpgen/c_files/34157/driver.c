#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)159;
int var_4 = -596301828;
int var_6 = -1868427730;
unsigned char var_10 = (unsigned char)38;
unsigned long long int var_14 = 4440477728568282532ULL;
int var_17 = 1151438772;
int zero = 0;
int var_18 = 562652282;
unsigned int var_19 = 7436380U;
int var_20 = -2089093928;
unsigned long long int arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 14672107393098671400ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
