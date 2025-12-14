#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 437082257060454482LL;
signed char var_5 = (signed char)49;
long long int var_14 = -8012762938414794350LL;
int zero = 0;
unsigned long long int var_15 = 2444901837883648416ULL;
unsigned char var_16 = (unsigned char)165;
long long int var_17 = -4094229254874685912LL;
short var_18 = (short)14861;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
