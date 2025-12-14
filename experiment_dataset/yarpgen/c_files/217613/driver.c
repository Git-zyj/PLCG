#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48149;
unsigned short var_7 = (unsigned short)26619;
unsigned short var_11 = (unsigned short)7130;
unsigned short var_13 = (unsigned short)57040;
int zero = 0;
unsigned short var_17 = (unsigned short)22574;
unsigned short var_18 = (unsigned short)61147;
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
