#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4326;
int var_7 = 1823025400;
int var_9 = -576734725;
int var_11 = -266039392;
int zero = 0;
int var_12 = -33672062;
unsigned char var_13 = (unsigned char)225;
unsigned long long int var_14 = 14037293029807007117ULL;
unsigned int var_15 = 2107440558U;
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
