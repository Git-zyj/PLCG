#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2227814773426570703LL;
int var_3 = 1859495294;
long long int var_5 = 8572855550135046477LL;
long long int var_6 = -7083476405418504919LL;
long long int var_12 = -1426775808437088053LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3043295225U;
short var_19 = (short)-17326;
unsigned char var_20 = (unsigned char)169;
void init() {
}

void checksum() {
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
