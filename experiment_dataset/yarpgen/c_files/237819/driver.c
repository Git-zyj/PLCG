#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2052380483;
int var_2 = -102324646;
int var_7 = -1973644703;
unsigned short var_8 = (unsigned short)29446;
unsigned short var_9 = (unsigned short)22812;
int zero = 0;
unsigned long long int var_13 = 7564383532578957357ULL;
unsigned short var_14 = (unsigned short)10398;
unsigned long long int var_15 = 17659372956347751096ULL;
void init() {
}

void checksum() {
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
