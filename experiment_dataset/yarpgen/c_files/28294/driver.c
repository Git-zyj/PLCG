#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1873648619688925520LL;
unsigned int var_12 = 1286850767U;
long long int var_15 = 285037853034422635LL;
int zero = 0;
long long int var_17 = 2187826071287726023LL;
int var_18 = -667407074;
unsigned int var_19 = 323551165U;
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
