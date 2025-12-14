#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1263820748;
int var_2 = 750045382;
signed char var_4 = (signed char)125;
short var_5 = (short)-4179;
signed char var_8 = (signed char)-6;
unsigned long long int var_9 = 4001145960694236745ULL;
int zero = 0;
long long int var_10 = -4253373179518307618LL;
unsigned int var_11 = 2583699658U;
unsigned long long int var_12 = 8042263811519216241ULL;
short var_13 = (short)-5086;
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
