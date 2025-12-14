#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1479058435;
long long int var_3 = -8632542611485033614LL;
unsigned char var_8 = (unsigned char)40;
int zero = 0;
long long int var_15 = -3301652564600324416LL;
long long int var_16 = 6473396029301706114LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
