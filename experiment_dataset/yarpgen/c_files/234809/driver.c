#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7846718533548267820LL;
unsigned short var_6 = (unsigned short)46930;
int zero = 0;
signed char var_10 = (signed char)102;
signed char var_11 = (signed char)-112;
unsigned short var_12 = (unsigned short)32355;
long long int var_13 = -1979295866129122640LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
