#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2839580580459278387ULL;
signed char var_5 = (signed char)14;
short var_6 = (short)-20302;
short var_9 = (short)-2287;
unsigned long long int var_12 = 3586444245406449686ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)14888;
unsigned long long int var_14 = 9578558550400458781ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
