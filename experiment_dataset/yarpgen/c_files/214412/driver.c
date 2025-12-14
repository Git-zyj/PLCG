#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)9;
unsigned short var_5 = (unsigned short)56431;
unsigned long long int var_8 = 1025615149158752923ULL;
int zero = 0;
int var_12 = 244024403;
int var_13 = 1404909517;
signed char var_14 = (signed char)101;
long long int var_15 = -1589546966015905087LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
