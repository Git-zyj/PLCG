#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4121705545U;
unsigned char var_1 = (unsigned char)40;
short var_8 = (short)22127;
int zero = 0;
unsigned int var_10 = 963362956U;
short var_11 = (short)21347;
unsigned char var_12 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
