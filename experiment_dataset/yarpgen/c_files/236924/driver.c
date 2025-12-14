#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)4;
unsigned char var_6 = (unsigned char)245;
signed char var_7 = (signed char)37;
unsigned char var_9 = (unsigned char)80;
unsigned char var_10 = (unsigned char)83;
signed char var_13 = (signed char)-70;
int zero = 0;
signed char var_14 = (signed char)-73;
unsigned char var_15 = (unsigned char)159;
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
