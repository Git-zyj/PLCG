#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1500597968;
unsigned int var_3 = 1495592948U;
signed char var_6 = (signed char)-127;
unsigned int var_7 = 4107122986U;
unsigned long long int var_10 = 6912969530854184602ULL;
int var_13 = -1549471080;
int zero = 0;
int var_14 = -346987018;
signed char var_15 = (signed char)-102;
short var_16 = (short)-20145;
void init() {
}

void checksum() {
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
