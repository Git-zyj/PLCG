#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)10;
unsigned char var_9 = (unsigned char)123;
short var_11 = (short)-10162;
unsigned char var_13 = (unsigned char)126;
int zero = 0;
unsigned long long int var_17 = 14075346554236607331ULL;
long long int var_18 = 5620428394778925661LL;
unsigned char var_19 = (unsigned char)247;
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
