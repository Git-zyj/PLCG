#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 3579232;
unsigned int var_8 = 3361011863U;
int var_14 = 869336832;
int zero = 0;
int var_17 = -378175461;
long long int var_18 = 5335750784659791264LL;
unsigned int var_19 = 129922304U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
