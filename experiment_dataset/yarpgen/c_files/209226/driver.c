#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5034380115694436603LL;
int var_2 = -689318306;
unsigned long long int var_4 = 3586408364740318696ULL;
signed char var_5 = (signed char)12;
unsigned long long int var_8 = 6833655845810738820ULL;
unsigned short var_9 = (unsigned short)37648;
unsigned long long int var_11 = 14029777673163139944ULL;
signed char var_12 = (signed char)50;
int zero = 0;
signed char var_15 = (signed char)80;
unsigned char var_16 = (unsigned char)34;
int var_17 = -1865897175;
unsigned int var_18 = 3138444173U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
