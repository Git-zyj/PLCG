#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 46087986676662936LL;
int var_1 = -1192569369;
long long int var_9 = -1286302706354237362LL;
int var_13 = -420768999;
int zero = 0;
long long int var_16 = 4776435879819174749LL;
unsigned long long int var_17 = 15058877728343370630ULL;
long long int var_18 = 3707233181355628590LL;
int var_19 = 2051677109;
long long int var_20 = 7520095851223938808LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
