#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8388787748183430149ULL;
unsigned long long int var_8 = 6704009099598220876ULL;
unsigned char var_12 = (unsigned char)111;
int zero = 0;
long long int var_13 = -7373210012171311193LL;
int var_14 = 1808045702;
unsigned short var_15 = (unsigned short)22716;
void init() {
}

void checksum() {
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
