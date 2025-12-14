#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28105;
short var_2 = (short)1760;
unsigned int var_3 = 162518473U;
long long int var_5 = -2471706294616821734LL;
int zero = 0;
unsigned long long int var_12 = 13073987595257097377ULL;
signed char var_13 = (signed char)-53;
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
