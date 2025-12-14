#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5771430619355222741LL;
short var_9 = (short)-16024;
unsigned long long int var_11 = 12697258368789082638ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1971299684030667099LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
