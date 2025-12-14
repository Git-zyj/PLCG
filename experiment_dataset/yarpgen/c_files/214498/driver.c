#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 440726871U;
unsigned short var_4 = (unsigned short)31419;
signed char var_8 = (signed char)-18;
unsigned long long int var_10 = 10067171756610198966ULL;
unsigned int var_12 = 1525596321U;
unsigned short var_13 = (unsigned short)45521;
int zero = 0;
int var_14 = -121699115;
short var_15 = (short)4719;
signed char var_16 = (signed char)-98;
void init() {
}

void checksum() {
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
