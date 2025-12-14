#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16756421048407092045ULL;
short var_3 = (short)13457;
unsigned int var_6 = 1139334734U;
unsigned long long int var_7 = 11833777657344734150ULL;
short var_8 = (short)19904;
int zero = 0;
unsigned int var_10 = 439570120U;
unsigned int var_11 = 2551120800U;
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
