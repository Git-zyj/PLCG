#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33015;
unsigned int var_4 = 1955439607U;
unsigned short var_5 = (unsigned short)25905;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 15071750901502422052ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)37234;
unsigned int var_14 = 3627561254U;
unsigned int var_15 = 2218457460U;
unsigned char var_16 = (unsigned char)3;
int var_17 = -1630606603;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
