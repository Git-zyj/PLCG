#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 678387023;
long long int var_8 = 5311801472616793563LL;
unsigned char var_14 = (unsigned char)74;
int zero = 0;
unsigned short var_18 = (unsigned short)60328;
unsigned char var_19 = (unsigned char)54;
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
