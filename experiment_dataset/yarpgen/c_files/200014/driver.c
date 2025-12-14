#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5579983802447652403LL;
unsigned int var_13 = 3049114217U;
long long int var_15 = -4679031942646210967LL;
signed char var_16 = (signed char)-8;
int zero = 0;
long long int var_17 = -4695863540937623040LL;
unsigned int var_18 = 2083102091U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
