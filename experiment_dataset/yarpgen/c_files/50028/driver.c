#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1733957515;
signed char var_1 = (signed char)-109;
short var_2 = (short)-14953;
unsigned int var_11 = 2650205512U;
unsigned short var_13 = (unsigned short)53201;
signed char var_15 = (signed char)125;
int var_16 = -1611838954;
int zero = 0;
unsigned long long int var_17 = 2579801019738789662ULL;
unsigned int var_18 = 3671340846U;
void init() {
}

void checksum() {
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
