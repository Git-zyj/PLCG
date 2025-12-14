#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1550535644;
signed char var_2 = (signed char)93;
signed char var_3 = (signed char)16;
unsigned short var_4 = (unsigned short)1748;
unsigned int var_8 = 1119833639U;
int zero = 0;
unsigned int var_10 = 231315705U;
long long int var_11 = 4216476462587540008LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
