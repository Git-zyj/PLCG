#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12085799326076537873ULL;
short var_2 = (short)30859;
int var_10 = -1141802060;
int zero = 0;
long long int var_15 = 6035191671491432172LL;
int var_16 = 1801730361;
signed char var_17 = (signed char)-67;
void init() {
}

void checksum() {
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
