#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_14 = 3092370337U;
int var_17 = -1100164922;
int zero = 0;
unsigned int var_19 = 704277930U;
unsigned long long int var_20 = 17537356880954734407ULL;
long long int var_21 = -404968646472162939LL;
long long int var_22 = -8569883147968557640LL;
unsigned int var_23 = 188394093U;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -3372559524322227759LL;
}

void checksum() {
    hash(&seed, var_19);
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
