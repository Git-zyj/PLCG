#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1467669787110781960LL;
int var_3 = 1027378861;
long long int var_8 = -445135938681705165LL;
unsigned char var_10 = (unsigned char)147;
unsigned char var_13 = (unsigned char)179;
int zero = 0;
unsigned short var_17 = (unsigned short)49062;
long long int var_18 = -2444933216271712132LL;
long long int var_19 = 3565784575979626399LL;
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
