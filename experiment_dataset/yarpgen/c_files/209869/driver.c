#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8856473905269945978LL;
unsigned long long int var_6 = 2888557323397176725ULL;
unsigned int var_8 = 1156152462U;
long long int var_9 = 5657972763784192974LL;
int zero = 0;
unsigned int var_17 = 3923341109U;
unsigned int var_18 = 3970893362U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
