#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
long long int var_2 = 248639317223855498LL;
int var_3 = -2145249276;
long long int var_6 = -2123547728667318782LL;
unsigned int var_10 = 1387809134U;
int zero = 0;
short var_14 = (short)76;
unsigned short var_15 = (unsigned short)54663;
unsigned int var_16 = 510022127U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
