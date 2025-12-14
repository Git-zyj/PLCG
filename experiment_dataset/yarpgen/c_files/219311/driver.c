#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8444647525572616106ULL;
short var_7 = (short)-22140;
unsigned long long int var_11 = 11488926509216242749ULL;
unsigned long long int var_12 = 8099385976762327223ULL;
int var_16 = -1850516731;
unsigned short var_17 = (unsigned short)21052;
int zero = 0;
long long int var_19 = -8839185758445276280LL;
int var_20 = -956257360;
unsigned long long int var_21 = 17183521178408833036ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
