#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13760;
unsigned int var_5 = 3514961175U;
unsigned int var_7 = 4292199254U;
signed char var_8 = (signed char)117;
long long int var_9 = -3468331017100833045LL;
short var_11 = (short)23314;
int var_12 = -1814437137;
int zero = 0;
unsigned int var_13 = 512830736U;
unsigned long long int var_14 = 4987160537172447822ULL;
int var_15 = 112412197;
long long int var_16 = -7089735884051982054LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
