#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1263696239;
unsigned int var_2 = 2531905154U;
int var_3 = -160968485;
signed char var_4 = (signed char)44;
signed char var_7 = (signed char)-49;
signed char var_9 = (signed char)120;
int var_11 = 652709700;
int zero = 0;
unsigned int var_12 = 3805104356U;
int var_13 = -727536757;
signed char var_14 = (signed char)-100;
int var_15 = -2011215684;
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
