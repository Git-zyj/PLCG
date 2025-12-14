#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1446322287;
unsigned short var_2 = (unsigned short)11638;
unsigned long long int var_8 = 2664650922175141695ULL;
short var_12 = (short)-26743;
signed char var_13 = (signed char)-118;
int zero = 0;
int var_15 = 727522590;
unsigned short var_16 = (unsigned short)10619;
void init() {
}

void checksum() {
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
