#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41503;
long long int var_5 = 4937022287789411972LL;
unsigned int var_9 = 602525394U;
long long int var_10 = -7380894210683937568LL;
int zero = 0;
int var_17 = -1015511565;
short var_18 = (short)-14704;
int var_19 = 1766910285;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
