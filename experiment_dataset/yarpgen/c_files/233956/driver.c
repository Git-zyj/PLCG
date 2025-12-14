#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)221;
short var_7 = (short)3482;
short var_9 = (short)-31345;
unsigned char var_11 = (unsigned char)58;
int zero = 0;
short var_15 = (short)28852;
unsigned char var_16 = (unsigned char)16;
short var_17 = (short)-30284;
long long int var_18 = 4919583650811212719LL;
short var_19 = (short)26040;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
