#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -715880467;
unsigned char var_1 = (unsigned char)230;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2595211133U;
int zero = 0;
short var_11 = (short)-20534;
unsigned int var_12 = 3901833823U;
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
