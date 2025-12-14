#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 9277403764727133865ULL;
unsigned int var_10 = 247752411U;
unsigned short var_12 = (unsigned short)44735;
signed char var_17 = (signed char)-22;
int zero = 0;
signed char var_18 = (signed char)115;
unsigned int var_19 = 2478903052U;
void init() {
}

void checksum() {
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
