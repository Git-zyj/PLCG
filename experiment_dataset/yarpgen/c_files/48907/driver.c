#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1627321503U;
long long int var_1 = 5367204215732504806LL;
int var_2 = -47321898;
unsigned char var_4 = (unsigned char)107;
unsigned char var_6 = (unsigned char)229;
long long int var_9 = -4330146417081962541LL;
unsigned int var_10 = 1357979700U;
int zero = 0;
int var_12 = -2137810433;
unsigned int var_13 = 133020345U;
unsigned char var_14 = (unsigned char)241;
int var_15 = -840529501;
unsigned int arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
unsigned char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 2897742547U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)238;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
