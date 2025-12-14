#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12484234966496804130ULL;
unsigned int var_4 = 2732751627U;
int var_5 = -1450810603;
unsigned long long int var_6 = 16655768020415719412ULL;
unsigned long long int var_12 = 4223353047713070079ULL;
int zero = 0;
int var_15 = -425953483;
unsigned long long int var_16 = 10121576477215400623ULL;
unsigned int var_17 = 1260133126U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
