#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)87;
long long int var_4 = -110053800173085735LL;
int var_5 = -1476387193;
int zero = 0;
short var_12 = (short)18043;
short var_13 = (short)-14792;
unsigned char var_14 = (unsigned char)231;
long long int var_15 = 1808064461205839288LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
