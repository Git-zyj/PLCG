#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14323;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-27272;
unsigned long long int var_9 = 13455316856157961942ULL;
int zero = 0;
int var_11 = -1375988240;
int var_12 = 156673785;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
