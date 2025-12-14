#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47511;
unsigned short var_11 = (unsigned short)29907;
unsigned short var_12 = (unsigned short)34565;
int zero = 0;
long long int var_15 = 1201548767975032596LL;
short var_16 = (short)-7513;
signed char var_17 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
