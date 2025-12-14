#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
unsigned char var_2 = (unsigned char)236;
signed char var_9 = (signed char)-85;
int var_16 = -860412949;
int zero = 0;
unsigned char var_19 = (unsigned char)135;
unsigned int var_20 = 3296744718U;
signed char var_21 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
