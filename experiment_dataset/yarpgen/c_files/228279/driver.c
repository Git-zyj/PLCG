#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-26154;
signed char var_8 = (signed char)-76;
short var_9 = (short)-15380;
int var_10 = -1655920607;
short var_11 = (short)19222;
short var_19 = (short)28234;
int zero = 0;
signed char var_20 = (signed char)-64;
long long int var_21 = -1409723400539431612LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
