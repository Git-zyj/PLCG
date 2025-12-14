#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1970391330;
signed char var_3 = (signed char)118;
short var_9 = (short)5287;
signed char var_10 = (signed char)-6;
unsigned char var_12 = (unsigned char)241;
unsigned short var_13 = (unsigned short)43318;
int zero = 0;
int var_14 = 686730298;
short var_15 = (short)4226;
void init() {
}

void checksum() {
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
