#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_5 = -7849039653995274790LL;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_12 = -2168023953797454855LL;
long long int var_13 = -4254754774809880165LL;
int zero = 0;
long long int var_14 = -2112700439965798979LL;
long long int var_15 = -2667121669430848934LL;
long long int var_16 = 107197990934418279LL;
long long int var_17 = -4680295807188303981LL;
void init() {
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
