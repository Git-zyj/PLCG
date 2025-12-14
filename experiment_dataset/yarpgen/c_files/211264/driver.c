#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -864875513;
unsigned short var_3 = (unsigned short)21629;
unsigned int var_4 = 951903588U;
unsigned int var_5 = 3383224313U;
int var_8 = 339652778;
short var_9 = (short)8882;
unsigned int var_10 = 2864444037U;
short var_12 = (short)-17014;
int zero = 0;
int var_13 = -1062232379;
unsigned int var_14 = 2327548075U;
short var_15 = (short)-27739;
unsigned int var_16 = 511245858U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
