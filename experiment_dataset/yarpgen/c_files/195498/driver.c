#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2015277607;
unsigned int var_7 = 2089989522U;
int var_12 = 1404826257;
unsigned int var_13 = 1638399586U;
int zero = 0;
int var_17 = 1912889009;
int var_18 = -58905786;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
