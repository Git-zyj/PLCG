#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31920;
unsigned int var_5 = 1151846649U;
unsigned char var_7 = (unsigned char)16;
unsigned long long int var_8 = 17070966321175646592ULL;
int zero = 0;
int var_12 = 107469183;
int var_13 = -1272608814;
void init() {
}

void checksum() {
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
