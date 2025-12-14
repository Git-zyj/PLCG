#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6299603606178916545LL;
int var_8 = 960883566;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = -6635218484929629832LL;
unsigned short var_11 = (unsigned short)34459;
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
