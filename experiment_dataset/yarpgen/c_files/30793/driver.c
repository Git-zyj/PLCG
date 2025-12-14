#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1282953934U;
unsigned char var_2 = (unsigned char)26;
unsigned char var_3 = (unsigned char)105;
long long int var_7 = 882158312028828796LL;
unsigned int var_9 = 3673339099U;
int zero = 0;
long long int var_16 = -9129814223898840054LL;
unsigned char var_17 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
