#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1792713110;
int var_3 = -1412439430;
unsigned char var_5 = (unsigned char)66;
int zero = 0;
long long int var_14 = 4904860993797489609LL;
signed char var_15 = (signed char)-55;
void init() {
}

void checksum() {
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
