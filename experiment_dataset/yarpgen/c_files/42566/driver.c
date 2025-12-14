#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2723573959320250922LL;
long long int var_5 = -4730955054945794547LL;
long long int var_9 = -8277561097593695555LL;
long long int var_10 = -7125392634724674398LL;
long long int var_11 = 4589321208041046356LL;
long long int var_12 = 6754739740009135088LL;
long long int var_14 = 3753539257821787532LL;
long long int var_16 = 7360395837927160985LL;
long long int var_17 = -3722618746681086222LL;
long long int var_19 = 4469668690603932045LL;
int zero = 0;
long long int var_20 = 2844968653714494620LL;
long long int var_21 = 2882311706841070885LL;
long long int var_22 = -1743370373498072433LL;
long long int var_23 = 4806237263988243820LL;
long long int var_24 = 6428763646636696287LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
