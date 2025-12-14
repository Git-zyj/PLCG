#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4009933992U;
unsigned long long int var_3 = 3705177695316119907ULL;
signed char var_4 = (signed char)-54;
unsigned int var_9 = 2960488488U;
int zero = 0;
long long int var_10 = 2615391924036539210LL;
unsigned long long int var_11 = 17413639060470803937ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
