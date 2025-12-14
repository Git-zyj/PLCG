#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3643844528827927898LL;
_Bool var_8 = (_Bool)1;
long long int var_10 = -7461065563404208723LL;
long long int var_12 = 9117010076335569055LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -3725119249570795822LL;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 5024357248881871238ULL;
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
