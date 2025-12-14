#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8990824696796320725LL;
unsigned long long int var_3 = 3825691813443771060ULL;
int var_13 = 271170956;
int zero = 0;
unsigned short var_19 = (unsigned short)9925;
short var_20 = (short)-23737;
short var_21 = (short)-1357;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
