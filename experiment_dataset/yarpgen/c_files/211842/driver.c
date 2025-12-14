#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)16415;
unsigned char var_11 = (unsigned char)45;
short var_13 = (short)18994;
int zero = 0;
int var_14 = -1091230015;
signed char var_15 = (signed char)35;
unsigned int var_16 = 1009838835U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
