#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)193;
unsigned long long int var_4 = 1791547460289183488ULL;
long long int var_7 = -7615700962265098277LL;
short var_12 = (short)-31807;
int zero = 0;
int var_17 = -1038824136;
long long int var_18 = 4157519296918543749LL;
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
