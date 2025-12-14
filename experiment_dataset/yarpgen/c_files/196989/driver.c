#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1763726538U;
unsigned short var_5 = (unsigned short)7741;
unsigned short var_7 = (unsigned short)27571;
int zero = 0;
signed char var_15 = (signed char)111;
long long int var_16 = 1049050743855122776LL;
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
