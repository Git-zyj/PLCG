#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)80;
signed char var_3 = (signed char)-50;
short var_4 = (short)-28461;
long long int var_7 = 2682579605823666898LL;
unsigned short var_8 = (unsigned short)27272;
int zero = 0;
int var_10 = -1686294336;
unsigned int var_11 = 739778142U;
long long int var_12 = -1629285452409428027LL;
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
