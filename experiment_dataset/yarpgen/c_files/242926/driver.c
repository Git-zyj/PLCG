#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
int var_6 = -1642950939;
int var_9 = -1677649055;
unsigned long long int var_10 = 14723361077093997917ULL;
int zero = 0;
unsigned int var_12 = 533466535U;
unsigned long long int var_13 = 16578129373014647065ULL;
short var_14 = (short)-20077;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
