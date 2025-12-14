#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3344719922523119550LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)48759;
unsigned long long int var_13 = 9569034999664433975ULL;
int zero = 0;
unsigned long long int var_14 = 5871551363943030726ULL;
unsigned short var_15 = (unsigned short)19191;
long long int var_16 = -115966237630306794LL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 520122312U;
unsigned long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 17842609845229659749ULL : 5783536636937375270ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
