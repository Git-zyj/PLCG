#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
int var_1 = -91624104;
signed char var_4 = (signed char)11;
signed char var_5 = (signed char)85;
int var_11 = -2142862319;
int zero = 0;
unsigned long long int var_14 = 1819133042002246538ULL;
unsigned long long int var_15 = 1827295301771235089ULL;
int var_16 = 1828157164;
int var_17 = -2104202741;
int var_18 = -751151986;
signed char var_19 = (signed char)30;
int var_20 = 1670626285;
int var_21 = -1896641639;
long long int arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -1195914411276124590LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
