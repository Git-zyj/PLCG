#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1523873764620638497LL;
int var_9 = -2074050617;
int var_11 = 130502539;
unsigned int var_16 = 3825306535U;
int zero = 0;
unsigned int var_19 = 2904849868U;
unsigned int var_20 = 2748322876U;
void init() {
}

void checksum() {
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
