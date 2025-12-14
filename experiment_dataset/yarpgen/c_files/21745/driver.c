#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3242876436703895318LL;
long long int var_1 = -7633881141443291228LL;
long long int var_2 = 110429224260150301LL;
long long int var_4 = -2042916750770817748LL;
long long int var_7 = 7415296697899346357LL;
unsigned int var_12 = 3701557351U;
long long int var_14 = -4806496041184433741LL;
long long int var_15 = 2638996672673180700LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int var_18 = -856893015;
int var_19 = -1906282319;
unsigned int var_20 = 2495442282U;
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
