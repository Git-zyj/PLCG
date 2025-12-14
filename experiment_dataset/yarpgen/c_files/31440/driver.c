#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24420;
unsigned short var_4 = (unsigned short)10861;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)5167;
int var_9 = -112854458;
int var_10 = 778505120;
int var_11 = -154553649;
int zero = 0;
unsigned short var_14 = (unsigned short)43732;
short var_15 = (short)-12391;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
