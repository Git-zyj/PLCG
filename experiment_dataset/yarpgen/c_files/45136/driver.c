#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2498817081435736746LL;
long long int var_7 = -2823431532619192606LL;
long long int var_12 = -4484237342067269154LL;
long long int var_13 = 3152850639977635753LL;
int zero = 0;
int var_14 = 1568006177;
long long int var_15 = 9075574220423183597LL;
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
