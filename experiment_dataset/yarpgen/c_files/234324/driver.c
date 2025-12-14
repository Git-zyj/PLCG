#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
unsigned short var_2 = (unsigned short)24442;
unsigned short var_7 = (unsigned short)40246;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-2605;
long long int var_15 = 2613592257464104191LL;
void init() {
}

void checksum() {
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
