#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6146256384119593028LL;
long long int var_2 = 40447426339402076LL;
int var_8 = 1592458993;
unsigned short var_10 = (unsigned short)57171;
unsigned int var_11 = 2925794757U;
int zero = 0;
unsigned int var_20 = 3212980773U;
unsigned int var_21 = 1515668565U;
unsigned long long int var_22 = 6828333844345919427ULL;
short var_23 = (short)-30254;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
