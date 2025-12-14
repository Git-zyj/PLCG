#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12497248376998136699ULL;
short var_1 = (short)-30398;
unsigned short var_3 = (unsigned short)16386;
long long int var_5 = -3110992665131841378LL;
unsigned char var_8 = (unsigned char)245;
unsigned short var_9 = (unsigned short)43729;
int var_10 = 1275533640;
int zero = 0;
long long int var_11 = -2734022951415836390LL;
unsigned char var_12 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
