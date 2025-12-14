#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1457969966867620892LL;
short var_9 = (short)-17062;
unsigned char var_14 = (unsigned char)203;
short var_15 = (short)22857;
int zero = 0;
int var_16 = -1355706486;
short var_17 = (short)-27219;
unsigned int var_18 = 3802480644U;
void init() {
}

void checksum() {
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
