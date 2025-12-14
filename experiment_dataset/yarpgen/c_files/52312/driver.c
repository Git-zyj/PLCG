#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 24032983271021563ULL;
signed char var_10 = (signed char)41;
unsigned short var_16 = (unsigned short)22113;
int zero = 0;
unsigned int var_20 = 835314620U;
unsigned int var_21 = 62292020U;
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
