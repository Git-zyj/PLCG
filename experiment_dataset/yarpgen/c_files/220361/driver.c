#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)1;
unsigned int var_5 = 4094980390U;
unsigned char var_6 = (unsigned char)228;
int zero = 0;
signed char var_12 = (signed char)-59;
signed char var_13 = (signed char)95;
unsigned int var_14 = 2284377330U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
