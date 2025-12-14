#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -955182490;
unsigned int var_5 = 1813923475U;
int var_8 = -745243226;
long long int var_11 = -221849234828746410LL;
int var_16 = -1399232386;
int zero = 0;
short var_20 = (short)-22127;
unsigned int var_21 = 3239584342U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
