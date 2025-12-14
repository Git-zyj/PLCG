#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)103;
long long int var_10 = 1652931338009847967LL;
int var_11 = 633784742;
unsigned char var_13 = (unsigned char)130;
int zero = 0;
unsigned int var_17 = 3457906711U;
int var_18 = -1760105573;
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
