#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3728055918U;
long long int var_11 = -2809672171124982459LL;
unsigned short var_12 = (unsigned short)4512;
unsigned long long int var_15 = 17081343810263573127ULL;
signed char var_16 = (signed char)10;
int zero = 0;
unsigned short var_18 = (unsigned short)34721;
signed char var_19 = (signed char)120;
void init() {
}

void checksum() {
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
