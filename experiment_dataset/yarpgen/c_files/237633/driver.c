#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1410775493U;
unsigned char var_2 = (unsigned char)61;
unsigned int var_5 = 2868743302U;
unsigned int var_8 = 1317154847U;
long long int var_9 = -2617657697131328640LL;
int zero = 0;
unsigned int var_11 = 1473320704U;
unsigned int var_12 = 33919631U;
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
