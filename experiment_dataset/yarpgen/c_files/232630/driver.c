#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5077810824603122647LL;
int var_7 = 1336079915;
long long int var_8 = 1701492756690878575LL;
int zero = 0;
unsigned int var_12 = 1873923195U;
unsigned short var_13 = (unsigned short)25853;
void init() {
}

void checksum() {
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
