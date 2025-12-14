#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12017;
int var_4 = -96314618;
long long int var_5 = 8425606818478300217LL;
short var_7 = (short)3051;
unsigned short var_15 = (unsigned short)12860;
int zero = 0;
unsigned short var_17 = (unsigned short)40991;
int var_18 = -573579469;
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
