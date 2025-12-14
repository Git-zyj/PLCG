#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1771718456736454530LL;
long long int var_1 = -3626819403083848213LL;
int var_4 = 1056017363;
unsigned int var_8 = 36375563U;
int zero = 0;
int var_13 = 61607653;
signed char var_14 = (signed char)20;
long long int var_15 = 5822459354681621018LL;
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
