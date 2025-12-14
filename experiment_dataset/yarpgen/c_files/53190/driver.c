#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54611;
int var_7 = 1386041609;
signed char var_13 = (signed char)65;
unsigned short var_14 = (unsigned short)27773;
int zero = 0;
int var_16 = -910751703;
unsigned char var_17 = (unsigned char)14;
long long int var_18 = 7854226399707792756LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
