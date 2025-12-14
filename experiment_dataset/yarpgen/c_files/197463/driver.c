#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56696;
unsigned int var_9 = 2778227043U;
long long int var_10 = 8606676829692870915LL;
unsigned short var_11 = (unsigned short)10395;
unsigned char var_13 = (unsigned char)35;
unsigned long long int var_14 = 8761124223468283805ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)8589;
unsigned short var_19 = (unsigned short)50309;
void init() {
}

void checksum() {
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
