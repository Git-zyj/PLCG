#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61927;
unsigned char var_2 = (unsigned char)215;
unsigned int var_3 = 1387997234U;
short var_9 = (short)20601;
int var_12 = -72832801;
unsigned long long int var_13 = 6818080225982179969ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)226;
short var_18 = (short)10569;
unsigned short var_19 = (unsigned short)56972;
unsigned char var_20 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
