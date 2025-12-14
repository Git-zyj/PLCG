#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 6663261490848197127ULL;
short var_11 = (short)-26964;
unsigned int var_13 = 515237093U;
int zero = 0;
short var_14 = (short)20626;
unsigned short var_15 = (unsigned short)41409;
short var_16 = (short)-7882;
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
