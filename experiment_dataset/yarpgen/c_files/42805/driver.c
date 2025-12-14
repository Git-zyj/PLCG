#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3001520368U;
_Bool var_9 = (_Bool)1;
short var_10 = (short)27212;
signed char var_14 = (signed char)1;
int zero = 0;
short var_16 = (short)-29037;
short var_17 = (short)-4455;
void init() {
}

void checksum() {
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
