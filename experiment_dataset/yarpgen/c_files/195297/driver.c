#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8733989829460211403LL;
long long int var_8 = 3764658872705945954LL;
signed char var_11 = (signed char)79;
unsigned char var_13 = (unsigned char)96;
int zero = 0;
unsigned short var_18 = (unsigned short)6967;
long long int var_19 = -3900659907363926184LL;
void init() {
}

void checksum() {
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
