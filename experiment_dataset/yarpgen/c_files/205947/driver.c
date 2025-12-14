#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)22;
signed char var_2 = (signed char)76;
unsigned char var_6 = (unsigned char)203;
long long int var_13 = -4614867352733759811LL;
int zero = 0;
unsigned int var_17 = 2494690815U;
signed char var_18 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
