#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1536133575;
short var_2 = (short)-7879;
int var_5 = 347580366;
signed char var_11 = (signed char)-22;
unsigned long long int var_12 = 9029998975381721345ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)228;
int var_16 = -1761975332;
void init() {
}

void checksum() {
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
