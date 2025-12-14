#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned int var_3 = 1009748463U;
unsigned short var_4 = (unsigned short)45727;
signed char var_6 = (signed char)-7;
int var_7 = -1396631775;
short var_8 = (short)-10461;
unsigned short var_11 = (unsigned short)12727;
int zero = 0;
short var_13 = (short)-24558;
short var_14 = (short)23493;
long long int var_15 = 1571018423347263432LL;
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
