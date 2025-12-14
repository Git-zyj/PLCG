#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2937341312U;
int var_9 = -1836016730;
unsigned char var_13 = (unsigned char)249;
int zero = 0;
unsigned int var_17 = 1572355579U;
long long int var_18 = 3942301251992366590LL;
unsigned short var_19 = (unsigned short)15364;
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
