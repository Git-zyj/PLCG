#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4383273134675709332LL;
long long int var_6 = -312183561113744056LL;
short var_7 = (short)-19831;
long long int var_10 = -1305208987045315414LL;
int zero = 0;
unsigned int var_20 = 828443300U;
int var_21 = 1066797342;
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
