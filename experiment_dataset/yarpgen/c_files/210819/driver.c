#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-100;
signed char var_10 = (signed char)13;
signed char var_11 = (signed char)112;
signed char var_13 = (signed char)20;
int var_15 = -161248460;
int zero = 0;
unsigned short var_20 = (unsigned short)1347;
unsigned short var_21 = (unsigned short)922;
unsigned short var_22 = (unsigned short)1538;
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
