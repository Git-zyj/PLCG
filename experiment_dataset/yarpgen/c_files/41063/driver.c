#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1272920935815956284ULL;
unsigned char var_2 = (unsigned char)17;
short var_3 = (short)2303;
unsigned long long int var_9 = 14663553842353691892ULL;
unsigned long long int var_13 = 6383430038489982315ULL;
short var_16 = (short)-25651;
signed char var_17 = (signed char)-24;
int zero = 0;
short var_18 = (short)16935;
unsigned int var_19 = 1602181333U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
