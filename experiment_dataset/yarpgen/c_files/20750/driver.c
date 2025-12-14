#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3159044671100633249LL;
unsigned char var_1 = (unsigned char)1;
signed char var_6 = (signed char)10;
long long int var_9 = -4179552218044517608LL;
long long int var_13 = -4064820784168528140LL;
int zero = 0;
unsigned int var_14 = 3897610669U;
unsigned char var_15 = (unsigned char)101;
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
