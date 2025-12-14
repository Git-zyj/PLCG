#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52481;
long long int var_4 = -6212069183741376233LL;
unsigned short var_5 = (unsigned short)22389;
int var_11 = 1515586467;
int zero = 0;
unsigned int var_12 = 3364738251U;
long long int var_13 = 5794390863510724720LL;
int var_14 = 35132932;
unsigned int var_15 = 1873880628U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
