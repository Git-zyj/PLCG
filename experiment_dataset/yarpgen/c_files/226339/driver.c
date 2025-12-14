#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1806863582;
int var_5 = -290579202;
unsigned int var_8 = 1605785571U;
unsigned long long int var_9 = 14459660713578104561ULL;
signed char var_11 = (signed char)91;
unsigned long long int var_13 = 13609733787996785995ULL;
short var_14 = (short)10322;
int zero = 0;
long long int var_15 = -573815681784783385LL;
long long int var_16 = -5691442509960196692LL;
unsigned int var_17 = 912977559U;
_Bool arr_0 [18] ;
unsigned int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3130575774U;
}

void checksum() {
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
