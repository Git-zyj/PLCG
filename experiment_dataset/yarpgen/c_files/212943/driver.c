#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
long long int var_6 = -3822708333523830576LL;
unsigned int var_9 = 1139565716U;
int var_12 = 79262370;
int zero = 0;
unsigned short var_13 = (unsigned short)41244;
short var_14 = (short)-10871;
unsigned int var_15 = 2017161647U;
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
