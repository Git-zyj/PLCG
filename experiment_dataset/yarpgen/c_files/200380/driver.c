#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8645770866584766337LL;
long long int var_3 = 1791063063778372581LL;
unsigned long long int var_6 = 15630775689627960828ULL;
unsigned int var_7 = 3170510113U;
unsigned int var_8 = 1824273706U;
int zero = 0;
long long int var_10 = 6027027297493410065LL;
int var_11 = -467127491;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
