#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)149;
short var_3 = (short)-19817;
long long int var_6 = 4308613073407275981LL;
int var_7 = 400986625;
short var_8 = (short)25317;
int zero = 0;
unsigned int var_11 = 903139653U;
unsigned int var_12 = 3737303295U;
short var_13 = (short)20090;
short var_14 = (short)-20420;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
