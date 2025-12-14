#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6326398744303831960LL;
unsigned short var_4 = (unsigned short)2585;
long long int var_5 = -6262752522624777012LL;
unsigned int var_6 = 1934007052U;
unsigned char var_7 = (unsigned char)23;
int var_9 = 2099729091;
int zero = 0;
unsigned char var_10 = (unsigned char)94;
unsigned long long int var_11 = 10585644067597090115ULL;
unsigned short var_12 = (unsigned short)27668;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
