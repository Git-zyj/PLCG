#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3629219375U;
int var_1 = -510992354;
int var_9 = 1309857159;
int var_12 = -1581064896;
long long int var_18 = -7694159882474997173LL;
int zero = 0;
int var_19 = 62572633;
int var_20 = -31618095;
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
