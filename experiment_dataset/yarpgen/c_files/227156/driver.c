#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 280620277;
long long int var_6 = -779796196224952195LL;
short var_9 = (short)-8249;
short var_10 = (short)-4439;
int var_11 = 501999552;
short var_12 = (short)-28283;
signed char var_13 = (signed char)-51;
int zero = 0;
short var_14 = (short)2663;
int var_15 = -1146994009;
void init() {
}

void checksum() {
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
