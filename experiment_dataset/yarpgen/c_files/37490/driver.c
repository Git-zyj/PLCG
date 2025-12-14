#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7888016245902584551ULL;
int var_5 = -1479626766;
short var_8 = (short)169;
long long int var_9 = -6226880005257763488LL;
unsigned int var_14 = 1677505659U;
int zero = 0;
unsigned short var_15 = (unsigned short)58058;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
