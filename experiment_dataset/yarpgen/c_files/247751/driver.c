#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)30;
signed char var_12 = (signed char)-51;
int zero = 0;
unsigned long long int var_17 = 7008129698843649361ULL;
unsigned short var_18 = (unsigned short)49459;
long long int var_19 = -4976627530535967531LL;
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
