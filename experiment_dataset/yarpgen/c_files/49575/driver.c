#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -343012401;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 693661498U;
int zero = 0;
unsigned char var_13 = (unsigned char)25;
unsigned short var_14 = (unsigned short)7568;
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
