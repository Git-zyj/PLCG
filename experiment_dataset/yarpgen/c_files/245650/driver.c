#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1262522476;
signed char var_1 = (signed char)-98;
int var_2 = 807717183;
signed char var_3 = (signed char)122;
int var_5 = -1554938607;
int var_8 = 441529049;
unsigned long long int var_12 = 3639706995185847878ULL;
int zero = 0;
int var_16 = -1440382281;
int var_17 = 331044730;
unsigned long long int var_18 = 14393749301121392524ULL;
signed char var_19 = (signed char)-79;
int var_20 = -793389568;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
