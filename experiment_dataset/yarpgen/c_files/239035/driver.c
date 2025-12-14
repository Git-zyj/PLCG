#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10721;
short var_3 = (short)-22425;
short var_4 = (short)2085;
unsigned short var_5 = (unsigned short)26826;
long long int var_6 = -7995628088799168049LL;
unsigned long long int var_7 = 12018105563803492380ULL;
unsigned long long int var_8 = 10799075697730163577ULL;
unsigned short var_9 = (unsigned short)36359;
int zero = 0;
unsigned int var_10 = 2688040762U;
unsigned short var_11 = (unsigned short)47234;
short var_12 = (short)-23949;
unsigned long long int var_13 = 10968287189921637165ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
