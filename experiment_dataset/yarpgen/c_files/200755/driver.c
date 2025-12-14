#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3496694769825531448ULL;
unsigned int var_10 = 545423217U;
unsigned long long int var_15 = 8497599165538753291ULL;
int zero = 0;
short var_18 = (short)20874;
unsigned char var_19 = (unsigned char)200;
long long int var_20 = 8250298732086981789LL;
unsigned char var_21 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
