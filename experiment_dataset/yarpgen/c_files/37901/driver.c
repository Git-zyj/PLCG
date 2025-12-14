#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8825906549725927761LL;
unsigned char var_5 = (unsigned char)205;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 1804802401412021302ULL;
int zero = 0;
unsigned int var_13 = 415965104U;
unsigned long long int var_14 = 15457267330157817150ULL;
long long int var_15 = 3933067237080722010LL;
unsigned int arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3783290155U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3874908519U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 359664247U;
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
