#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-52;
int var_2 = -814580882;
unsigned char var_4 = (unsigned char)196;
int var_5 = 199600409;
int zero = 0;
unsigned short var_13 = (unsigned short)1036;
int var_14 = -1351711377;
long long int var_15 = -6466408209058385829LL;
signed char var_16 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
