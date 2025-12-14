#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 729604812068635650ULL;
unsigned short var_4 = (unsigned short)29280;
unsigned long long int var_13 = 18068472525798622975ULL;
long long int var_14 = -1578711348134789068LL;
unsigned long long int var_17 = 7021319088762665798ULL;
int zero = 0;
short var_19 = (short)-13674;
signed char var_20 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
