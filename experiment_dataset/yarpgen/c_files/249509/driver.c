#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -620428303;
unsigned char var_5 = (unsigned char)95;
signed char var_12 = (signed char)114;
unsigned int var_13 = 30384265U;
int zero = 0;
signed char var_19 = (signed char)-67;
signed char var_20 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
