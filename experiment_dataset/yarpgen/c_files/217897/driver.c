#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5324161807502326105LL;
long long int var_5 = 6691467168762203552LL;
int zero = 0;
unsigned char var_17 = (unsigned char)218;
unsigned short var_18 = (unsigned short)49022;
unsigned long long int var_19 = 17398707780395080340ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
