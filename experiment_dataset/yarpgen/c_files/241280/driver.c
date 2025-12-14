#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 270310908U;
unsigned long long int var_6 = 3626360250116391755ULL;
unsigned int var_7 = 3346865413U;
int zero = 0;
long long int var_11 = -2717433557364765442LL;
short var_12 = (short)-19375;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
