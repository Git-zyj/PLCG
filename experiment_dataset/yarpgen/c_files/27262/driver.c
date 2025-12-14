#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1819401144;
unsigned short var_10 = (unsigned short)14690;
int var_12 = -1749037189;
unsigned long long int var_13 = 10144651304266872927ULL;
int zero = 0;
long long int var_17 = 4226815583061908263LL;
short var_18 = (short)31674;
void init() {
}

void checksum() {
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
