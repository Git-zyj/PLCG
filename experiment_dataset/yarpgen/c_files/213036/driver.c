#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
short var_4 = (short)2326;
long long int var_8 = 6638033823762280625LL;
unsigned char var_9 = (unsigned char)132;
int var_10 = -944357351;
unsigned short var_12 = (unsigned short)12372;
int zero = 0;
short var_13 = (short)-31553;
short var_14 = (short)13599;
int var_15 = -972200689;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
