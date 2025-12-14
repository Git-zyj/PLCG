#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2269410234U;
signed char var_4 = (signed char)-20;
unsigned char var_7 = (unsigned char)51;
unsigned int var_8 = 2384395427U;
int var_9 = 1650076820;
int zero = 0;
short var_11 = (short)-18921;
unsigned long long int var_12 = 13181202675104899105ULL;
short var_13 = (short)-5742;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
