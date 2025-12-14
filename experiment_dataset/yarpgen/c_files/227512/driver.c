#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1495429745U;
unsigned char var_6 = (unsigned char)84;
signed char var_13 = (signed char)107;
int zero = 0;
unsigned char var_14 = (unsigned char)216;
int var_15 = 616072788;
int var_16 = 1536716715;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
