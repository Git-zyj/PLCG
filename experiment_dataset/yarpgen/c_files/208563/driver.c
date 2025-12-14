#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1413960527U;
unsigned char var_3 = (unsigned char)216;
unsigned char var_4 = (unsigned char)196;
signed char var_5 = (signed char)31;
int zero = 0;
unsigned char var_10 = (unsigned char)54;
int var_11 = 1173722770;
unsigned long long int var_12 = 4770384754890944703ULL;
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
