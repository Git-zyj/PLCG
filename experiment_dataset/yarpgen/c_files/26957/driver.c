#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 12922784161908818927ULL;
short var_6 = (short)-5634;
unsigned int var_10 = 4143139012U;
short var_11 = (short)-6891;
int var_13 = -1927203483;
int zero = 0;
unsigned char var_14 = (unsigned char)40;
unsigned int var_15 = 573923242U;
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
