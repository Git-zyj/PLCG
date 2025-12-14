#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3408375956U;
short var_6 = (short)-12910;
long long int var_8 = 2676917293853301773LL;
int zero = 0;
unsigned long long int var_13 = 8733572076469180464ULL;
unsigned long long int var_14 = 14510803161283822766ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
