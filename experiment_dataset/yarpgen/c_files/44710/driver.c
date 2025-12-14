#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27674;
long long int var_7 = 8937493237586095449LL;
short var_9 = (short)14723;
int zero = 0;
unsigned char var_10 = (unsigned char)3;
long long int var_11 = -6354344532920698687LL;
unsigned long long int var_12 = 11941895931446202453ULL;
unsigned short var_13 = (unsigned short)9065;
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
