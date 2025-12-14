#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 276035563663589057LL;
int var_2 = -1645879900;
long long int var_7 = -6466097926838550341LL;
signed char var_10 = (signed char)34;
int zero = 0;
signed char var_14 = (signed char)100;
unsigned char var_15 = (unsigned char)126;
short var_16 = (short)-28511;
unsigned char var_17 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
