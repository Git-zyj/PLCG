#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2807771154U;
unsigned long long int var_1 = 13453393199670606043ULL;
int var_2 = -883342158;
short var_11 = (short)2967;
int zero = 0;
unsigned char var_12 = (unsigned char)177;
short var_13 = (short)7576;
unsigned int var_14 = 2740847478U;
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
