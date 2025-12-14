#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 84030465556601371LL;
short var_9 = (short)-21078;
unsigned long long int var_15 = 4833932765905261563ULL;
int zero = 0;
unsigned long long int var_17 = 3889333135000088843ULL;
long long int var_18 = 8452939098091455776LL;
unsigned long long int var_19 = 3013950409886543888ULL;
long long int var_20 = -9139291094706846935LL;
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
