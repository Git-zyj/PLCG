#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9800982225170464869ULL;
short var_5 = (short)9387;
int var_7 = -427758528;
int var_8 = -1270175546;
unsigned int var_9 = 1324873364U;
short var_11 = (short)-17181;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
unsigned char var_14 = (unsigned char)103;
signed char var_15 = (signed char)29;
long long int var_16 = -2445197818007728774LL;
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
