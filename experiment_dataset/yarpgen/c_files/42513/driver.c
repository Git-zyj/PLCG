#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-10654;
short var_10 = (short)-18005;
short var_11 = (short)-32234;
int zero = 0;
long long int var_13 = 8260647680080197521LL;
unsigned int var_14 = 2892284879U;
long long int var_15 = -5954800091020634533LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
