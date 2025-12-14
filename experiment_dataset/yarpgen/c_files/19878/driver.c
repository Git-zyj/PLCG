#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-2772;
unsigned short var_12 = (unsigned short)32093;
unsigned short var_13 = (unsigned short)40072;
long long int var_17 = -8277820703982180128LL;
int zero = 0;
unsigned short var_18 = (unsigned short)3808;
short var_19 = (short)-24139;
unsigned short var_20 = (unsigned short)1369;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
