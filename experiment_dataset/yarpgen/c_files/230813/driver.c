#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)96;
unsigned char var_2 = (unsigned char)22;
int var_3 = -488223614;
signed char var_8 = (signed char)126;
int zero = 0;
signed char var_11 = (signed char)-87;
unsigned int var_12 = 1224554828U;
unsigned char var_13 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
