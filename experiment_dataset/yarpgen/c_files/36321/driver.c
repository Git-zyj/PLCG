#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 872741808U;
unsigned char var_5 = (unsigned char)53;
short var_6 = (short)21349;
signed char var_9 = (signed char)38;
int var_12 = -943629315;
int zero = 0;
short var_13 = (short)-28456;
unsigned char var_14 = (unsigned char)5;
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
