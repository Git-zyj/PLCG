#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10488897371751603836ULL;
long long int var_4 = 8287055251174232587LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-31200;
int zero = 0;
short var_14 = (short)-24710;
unsigned long long int var_15 = 6347973882884830633ULL;
short var_16 = (short)23426;
int var_17 = -829965211;
short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)29030;
}

void checksum() {
    hash(&seed, var_14);
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
