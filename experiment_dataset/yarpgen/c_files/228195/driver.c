#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_5 = 2062095655;
_Bool var_7 = (_Bool)1;
int var_10 = -443669755;
int var_12 = -2136268767;
int var_14 = 1071141450;
int var_15 = -1078873394;
int zero = 0;
int var_17 = -433651104;
_Bool var_18 = (_Bool)1;
int var_19 = 1029590347;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
