#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 1978652180698622044ULL;
unsigned int var_16 = 1723982748U;
long long int var_19 = 7799802204491306218LL;
int zero = 0;
unsigned long long int var_20 = 4473261745232185144ULL;
unsigned long long int var_21 = 10491005506775870600ULL;
short var_22 = (short)-2999;
unsigned long long int var_23 = 3253525307311765638ULL;
unsigned int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1251540178U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
