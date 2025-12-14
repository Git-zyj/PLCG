#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2773749818U;
int var_13 = 1331506007;
long long int var_17 = 2412969308527546031LL;
long long int var_19 = -5928609865533794136LL;
int zero = 0;
int var_20 = 1815157473;
int var_21 = 615796788;
signed char var_22 = (signed char)124;
unsigned short var_23 = (unsigned short)14939;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
