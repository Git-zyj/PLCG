#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 5011645432864812136ULL;
unsigned short var_7 = (unsigned short)10052;
int var_8 = -360021366;
int zero = 0;
unsigned short var_19 = (unsigned short)38209;
unsigned short var_20 = (unsigned short)56396;
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
