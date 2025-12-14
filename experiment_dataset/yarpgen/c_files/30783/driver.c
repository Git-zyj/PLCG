#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)31469;
unsigned long long int var_14 = 694633376229525750ULL;
unsigned long long int var_15 = 4284514740707783099ULL;
unsigned long long int var_17 = 4440285610338195800ULL;
int zero = 0;
short var_20 = (short)-5710;
_Bool var_21 = (_Bool)1;
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
