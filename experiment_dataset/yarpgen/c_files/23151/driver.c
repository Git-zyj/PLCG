#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 11354740178061301736ULL;
unsigned short var_10 = (unsigned short)63008;
unsigned short var_11 = (unsigned short)31165;
short var_12 = (short)24674;
unsigned short var_15 = (unsigned short)47806;
int zero = 0;
int var_20 = 1870261594;
long long int var_21 = 4712566848325718603LL;
unsigned long long int var_22 = 1900693900241216603ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
