#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16943378973880765697ULL;
unsigned short var_6 = (unsigned short)58274;
int zero = 0;
unsigned short var_11 = (unsigned short)41018;
unsigned short var_12 = (unsigned short)37518;
unsigned char var_13 = (unsigned char)59;
unsigned short var_14 = (unsigned short)15701;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
