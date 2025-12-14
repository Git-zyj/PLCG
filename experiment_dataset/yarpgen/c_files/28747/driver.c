#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18230;
int var_5 = -1891207499;
signed char var_7 = (signed char)108;
int var_11 = -1690036971;
unsigned short var_13 = (unsigned short)46241;
int zero = 0;
unsigned char var_15 = (unsigned char)25;
int var_16 = 1430354742;
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
