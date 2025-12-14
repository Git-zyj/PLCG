#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2872448763U;
short var_8 = (short)-13255;
unsigned short var_9 = (unsigned short)65013;
unsigned short var_11 = (unsigned short)16989;
int zero = 0;
unsigned long long int var_17 = 16341350827089370941ULL;
int var_18 = -230572654;
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
