#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 4269514702908423224ULL;
long long int var_7 = -3296092245274256962LL;
short var_9 = (short)20399;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 382733238U;
unsigned char var_12 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
