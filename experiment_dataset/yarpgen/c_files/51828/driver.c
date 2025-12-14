#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 255159886544290063LL;
unsigned long long int var_8 = 10811789373740050712ULL;
long long int var_9 = -5354474864017530192LL;
int zero = 0;
signed char var_10 = (signed char)106;
int var_11 = 188121441;
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
