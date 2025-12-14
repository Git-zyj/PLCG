#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36356;
signed char var_4 = (signed char)62;
unsigned short var_9 = (unsigned short)37327;
long long int var_10 = -3150903066355885343LL;
int zero = 0;
long long int var_13 = 2885078530802907946LL;
signed char var_14 = (signed char)-42;
void init() {
}

void checksum() {
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
