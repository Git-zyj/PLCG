#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 302020553U;
unsigned short var_5 = (unsigned short)63502;
unsigned char var_9 = (unsigned char)88;
int zero = 0;
unsigned int var_12 = 4028382152U;
signed char var_13 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
