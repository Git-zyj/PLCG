#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28387;
unsigned long long int var_4 = 1083316763919480976ULL;
short var_12 = (short)19119;
int zero = 0;
short var_20 = (short)2040;
unsigned long long int var_21 = 7808095273889320758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
