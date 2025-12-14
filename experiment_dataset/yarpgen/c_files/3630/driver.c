#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 659557623;
signed char var_1 = (signed char)-1;
unsigned char var_6 = (unsigned char)108;
long long int var_7 = -8573804146262065526LL;
int zero = 0;
int var_14 = -655203765;
unsigned long long int var_15 = 7550830147095736454ULL;
unsigned int var_16 = 856421855U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
