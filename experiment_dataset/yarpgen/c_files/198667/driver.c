#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7076713330915958217LL;
int var_9 = 1627110166;
unsigned short var_10 = (unsigned short)36509;
signed char var_13 = (signed char)-34;
unsigned long long int var_17 = 8392780446167218621ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)31311;
unsigned short var_19 = (unsigned short)61066;
long long int var_20 = -2110467783294644659LL;
void init() {
}

void checksum() {
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
