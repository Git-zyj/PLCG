#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13293;
long long int var_6 = -3245457937994284527LL;
long long int var_13 = 576408385242744083LL;
int zero = 0;
unsigned int var_18 = 1030601473U;
unsigned short var_19 = (unsigned short)49417;
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
