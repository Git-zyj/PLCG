#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)25469;
unsigned char var_9 = (unsigned char)6;
unsigned long long int var_10 = 1966614282790290314ULL;
unsigned long long int var_13 = 12454821249143310590ULL;
unsigned int var_14 = 1801669373U;
int zero = 0;
short var_17 = (short)13691;
unsigned char var_18 = (unsigned char)6;
unsigned short var_19 = (unsigned short)58882;
unsigned short var_20 = (unsigned short)2275;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
