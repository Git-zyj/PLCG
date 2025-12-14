#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16485675376876159241ULL;
signed char var_5 = (signed char)-68;
unsigned long long int var_10 = 7447892179342325523ULL;
unsigned long long int var_11 = 201515478316168014ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7360363506899920325ULL;
unsigned short var_16 = (unsigned short)18633;
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
