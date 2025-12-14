#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16676319628210945048ULL;
unsigned long long int var_1 = 7538125853156839166ULL;
signed char var_2 = (signed char)-38;
unsigned long long int var_3 = 4981927469401888917ULL;
short var_9 = (short)16323;
int zero = 0;
unsigned char var_10 = (unsigned char)219;
short var_11 = (short)-10229;
unsigned char var_12 = (unsigned char)0;
unsigned char var_13 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
