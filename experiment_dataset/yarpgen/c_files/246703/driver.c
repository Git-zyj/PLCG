#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 586114686;
signed char var_6 = (signed char)86;
unsigned short var_12 = (unsigned short)39691;
short var_14 = (short)4547;
int zero = 0;
unsigned long long int var_17 = 3361996418560464534ULL;
int var_18 = -795836452;
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
