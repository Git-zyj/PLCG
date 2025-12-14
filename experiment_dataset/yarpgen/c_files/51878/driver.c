#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 234426729U;
unsigned char var_3 = (unsigned char)222;
unsigned int var_5 = 1904585887U;
unsigned int var_7 = 2459909619U;
signed char var_13 = (signed char)44;
int zero = 0;
unsigned char var_14 = (unsigned char)180;
short var_15 = (short)19673;
short var_16 = (short)9656;
signed char var_17 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
