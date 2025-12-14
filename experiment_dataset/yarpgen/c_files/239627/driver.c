#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8089539764282007787ULL;
unsigned long long int var_4 = 13014416225285031805ULL;
unsigned long long int var_6 = 7241003666759380495ULL;
signed char var_8 = (signed char)-126;
signed char var_13 = (signed char)-47;
int zero = 0;
long long int var_14 = -9104327252552317875LL;
unsigned long long int var_15 = 7169481067409061245ULL;
short var_16 = (short)-12702;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
