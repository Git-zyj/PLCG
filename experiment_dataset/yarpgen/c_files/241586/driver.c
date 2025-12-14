#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_6 = 1808894852800786862LL;
int var_7 = 199116675;
unsigned long long int var_11 = 2163667882380422512ULL;
int zero = 0;
unsigned long long int var_13 = 11080280461408672005ULL;
long long int var_14 = -2751454086901538335LL;
unsigned long long int var_15 = 9489216061874414900ULL;
unsigned short var_16 = (unsigned short)44608;
long long int var_17 = 6103727177739427623LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
