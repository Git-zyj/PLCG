#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3407;
unsigned long long int var_2 = 11887276943578353688ULL;
unsigned long long int var_3 = 16322335293864558498ULL;
short var_6 = (short)-6307;
unsigned long long int var_7 = 8935044532343989177ULL;
short var_8 = (short)21865;
short var_9 = (short)-14271;
short var_10 = (short)8895;
unsigned long long int var_13 = 6657522105796507152ULL;
int zero = 0;
unsigned long long int var_15 = 14174936776008401199ULL;
short var_16 = (short)-30623;
void init() {
}

void checksum() {
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
