#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10648531186242548486ULL;
unsigned short var_3 = (unsigned short)15280;
unsigned short var_5 = (unsigned short)1834;
unsigned long long int var_7 = 7375413345409714221ULL;
unsigned long long int var_8 = 1905563765967109946ULL;
unsigned int var_9 = 781561518U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)36;
long long int var_12 = 6658049245752190832LL;
long long int var_13 = -3436332288838465825LL;
unsigned short var_14 = (unsigned short)594;
int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1900055677;
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
