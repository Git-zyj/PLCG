#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4580989787155557988LL;
long long int var_3 = 7645443387290772966LL;
unsigned int var_4 = 105196604U;
int zero = 0;
long long int var_12 = -8675224905638729579LL;
long long int var_13 = -377900519000784263LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
