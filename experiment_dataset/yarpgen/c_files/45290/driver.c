#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3125294084U;
signed char var_10 = (signed char)0;
int var_14 = 1296206221;
short var_16 = (short)-14177;
int zero = 0;
signed char var_18 = (signed char)-114;
signed char var_19 = (signed char)-110;
int var_20 = -1443349915;
void init() {
}

void checksum() {
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
