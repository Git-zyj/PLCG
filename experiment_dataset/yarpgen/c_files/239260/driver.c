#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned long long int var_4 = 8744547461125571291ULL;
unsigned long long int var_10 = 13968614864050944471ULL;
short var_11 = (short)-14114;
int zero = 0;
int var_17 = -1194025302;
int var_18 = 1360287568;
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
