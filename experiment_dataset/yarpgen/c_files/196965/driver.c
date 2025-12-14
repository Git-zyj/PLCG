#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21334;
short var_2 = (short)18288;
unsigned short var_8 = (unsigned short)51481;
int var_13 = -1567454601;
int zero = 0;
unsigned int var_15 = 3130824550U;
unsigned long long int var_16 = 12378627560731936166ULL;
int var_17 = -655831114;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
