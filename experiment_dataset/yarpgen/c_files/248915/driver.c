#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3179344639U;
long long int var_6 = -3478939448547247304LL;
short var_9 = (short)29282;
int zero = 0;
signed char var_13 = (signed char)-49;
unsigned int var_14 = 2080342900U;
long long int var_15 = -588124582196148432LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
