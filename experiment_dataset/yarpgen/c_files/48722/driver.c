#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32136;
int var_4 = 237971585;
int var_5 = 1757818299;
unsigned short var_8 = (unsigned short)4672;
unsigned long long int var_9 = 3675193636797437479ULL;
int zero = 0;
unsigned int var_14 = 3873830926U;
short var_15 = (short)20690;
unsigned int var_16 = 3851863341U;
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
