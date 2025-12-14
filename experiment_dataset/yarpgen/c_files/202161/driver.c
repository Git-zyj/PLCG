#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5366010661188462977LL;
unsigned short var_4 = (unsigned short)45347;
signed char var_8 = (signed char)15;
long long int var_16 = 224433567380769211LL;
int zero = 0;
long long int var_20 = 5559016886810775968LL;
short var_21 = (short)16068;
int var_22 = -808791828;
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
