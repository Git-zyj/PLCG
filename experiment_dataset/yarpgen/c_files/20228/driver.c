#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)205;
unsigned long long int var_11 = 516937540121548749ULL;
unsigned long long int var_12 = 5420911579470568109ULL;
unsigned long long int var_13 = 6663477423153706301ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)56;
unsigned short var_15 = (unsigned short)63135;
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
