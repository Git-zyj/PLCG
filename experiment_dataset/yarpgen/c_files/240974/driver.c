#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37148;
unsigned short var_3 = (unsigned short)58760;
unsigned short var_5 = (unsigned short)7482;
unsigned short var_9 = (unsigned short)25131;
unsigned int var_12 = 1400306171U;
int zero = 0;
long long int var_14 = -7233719033417798489LL;
unsigned short var_15 = (unsigned short)7616;
int var_16 = -425425734;
short var_17 = (short)-8883;
short var_18 = (short)5275;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
