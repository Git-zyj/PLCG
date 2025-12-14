#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4394726637435098529LL;
unsigned char var_5 = (unsigned char)6;
int var_6 = -1655580692;
unsigned long long int var_12 = 16137577817959940930ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)203;
long long int var_21 = -7505745908947875285LL;
short var_22 = (short)-23473;
short var_23 = (short)13620;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
