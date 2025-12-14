#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)58;
unsigned long long int var_9 = 14072420026222489322ULL;
short var_10 = (short)5963;
short var_13 = (short)30727;
unsigned short var_14 = (unsigned short)14940;
int zero = 0;
long long int var_17 = 744410181243889731LL;
unsigned long long int var_18 = 5682606776909131728ULL;
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
