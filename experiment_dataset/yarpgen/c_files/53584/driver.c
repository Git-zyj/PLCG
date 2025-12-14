#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)28490;
unsigned short var_9 = (unsigned short)61303;
unsigned short var_13 = (unsigned short)29816;
int zero = 0;
unsigned short var_20 = (unsigned short)659;
unsigned short var_21 = (unsigned short)8019;
unsigned short var_22 = (unsigned short)63629;
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
