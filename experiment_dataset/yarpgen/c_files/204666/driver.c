#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -413739466;
signed char var_2 = (signed char)94;
unsigned short var_3 = (unsigned short)45174;
long long int var_6 = 4503936567278625082LL;
signed char var_8 = (signed char)120;
int var_13 = 1565421015;
int zero = 0;
signed char var_15 = (signed char)116;
unsigned short var_16 = (unsigned short)20188;
long long int var_17 = -2901390348133991410LL;
short var_18 = (short)-28765;
unsigned short var_19 = (unsigned short)54305;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
