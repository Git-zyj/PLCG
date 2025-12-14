#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7297215620891485307LL;
signed char var_5 = (signed char)21;
int var_8 = 2112233493;
unsigned char var_9 = (unsigned char)214;
unsigned short var_12 = (unsigned short)19478;
int var_14 = -158455813;
int zero = 0;
long long int var_15 = -900969614730472553LL;
short var_16 = (short)21380;
int var_17 = 348078823;
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
