#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1509;
unsigned long long int var_4 = 3327319120495927178ULL;
unsigned short var_7 = (unsigned short)23792;
int zero = 0;
unsigned long long int var_13 = 10149561871806102654ULL;
short var_14 = (short)-6214;
unsigned char var_15 = (unsigned char)45;
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
