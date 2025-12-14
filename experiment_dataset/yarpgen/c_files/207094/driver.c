#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10551297776267361315ULL;
unsigned short var_3 = (unsigned short)25178;
unsigned int var_10 = 613254904U;
int zero = 0;
signed char var_15 = (signed char)-101;
unsigned long long int var_16 = 12806230756751886178ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
