#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)15;
unsigned char var_6 = (unsigned char)222;
int var_9 = 1729322214;
unsigned int var_11 = 3330921523U;
int zero = 0;
signed char var_12 = (signed char)124;
long long int var_13 = -3124743825294964483LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
