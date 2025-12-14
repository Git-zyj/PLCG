#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned char var_3 = (unsigned char)154;
unsigned short var_6 = (unsigned short)28677;
long long int var_7 = 1193660681640648820LL;
int var_8 = 581558635;
int zero = 0;
unsigned int var_10 = 2229197248U;
long long int var_11 = -4018873646441689343LL;
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
