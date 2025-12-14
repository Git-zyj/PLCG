#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)235;
long long int var_7 = -6653180278524160847LL;
long long int var_9 = -7456010641760862714LL;
int zero = 0;
unsigned char var_13 = (unsigned char)105;
unsigned char var_14 = (unsigned char)70;
signed char var_15 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
