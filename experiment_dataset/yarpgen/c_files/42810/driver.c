#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21900;
unsigned int var_4 = 2827240944U;
short var_7 = (short)-25736;
short var_9 = (short)-21623;
unsigned short var_15 = (unsigned short)51980;
int zero = 0;
unsigned short var_16 = (unsigned short)47829;
short var_17 = (short)31449;
unsigned char var_18 = (unsigned char)67;
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
