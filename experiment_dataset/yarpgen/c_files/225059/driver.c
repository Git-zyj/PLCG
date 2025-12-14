#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5367841419216125714LL;
unsigned char var_5 = (unsigned char)2;
long long int var_13 = -2065145523406429445LL;
int zero = 0;
unsigned int var_20 = 3784871767U;
long long int var_21 = -5055201487381246369LL;
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
