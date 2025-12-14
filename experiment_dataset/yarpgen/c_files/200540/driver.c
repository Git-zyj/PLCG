#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -610797025;
unsigned int var_2 = 2385354673U;
short var_6 = (short)10896;
unsigned long long int var_7 = 15785020806236307402ULL;
int var_9 = -1806976275;
signed char var_10 = (signed char)-12;
unsigned long long int var_11 = 6555428522770100669ULL;
int zero = 0;
signed char var_12 = (signed char)-86;
unsigned long long int var_13 = 3700178799485269490ULL;
int var_14 = -1262648900;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
