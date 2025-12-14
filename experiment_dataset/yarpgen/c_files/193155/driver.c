#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)76;
unsigned short var_6 = (unsigned short)55113;
int zero = 0;
unsigned long long int var_17 = 8613689079995102966ULL;
signed char var_18 = (signed char)100;
unsigned short var_19 = (unsigned short)50409;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
