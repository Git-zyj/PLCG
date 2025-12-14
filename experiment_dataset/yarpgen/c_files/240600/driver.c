#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)190;
unsigned short var_12 = (unsigned short)65393;
int zero = 0;
unsigned long long int var_17 = 17154520196008679541ULL;
unsigned short var_18 = (unsigned short)5040;
unsigned long long int var_19 = 16329833172140394856ULL;
long long int var_20 = -5383804961557166449LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
