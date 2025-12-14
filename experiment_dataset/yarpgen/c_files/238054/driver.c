#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13620;
unsigned short var_4 = (unsigned short)25587;
unsigned long long int var_6 = 15749107428703457554ULL;
unsigned char var_8 = (unsigned char)44;
signed char var_9 = (signed char)-50;
short var_10 = (short)29571;
int zero = 0;
unsigned int var_11 = 927151911U;
unsigned char var_12 = (unsigned char)48;
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
