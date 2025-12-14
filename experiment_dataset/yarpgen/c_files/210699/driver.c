#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2425357083U;
unsigned int var_6 = 1268310852U;
unsigned char var_7 = (unsigned char)174;
int zero = 0;
unsigned char var_12 = (unsigned char)68;
unsigned char var_13 = (unsigned char)40;
unsigned char var_14 = (unsigned char)28;
unsigned char var_15 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
