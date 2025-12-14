#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -915245406;
int var_1 = 618301646;
int var_4 = -2127416095;
unsigned short var_5 = (unsigned short)22731;
signed char var_8 = (signed char)21;
int var_9 = 248263308;
int var_11 = 671836036;
short var_13 = (short)5304;
int zero = 0;
long long int var_14 = -6276435903026583980LL;
unsigned long long int var_15 = 3915428567948680840ULL;
void init() {
}

void checksum() {
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
