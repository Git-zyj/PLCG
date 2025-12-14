#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13135434040477055511ULL;
short var_4 = (short)-25295;
short var_8 = (short)536;
unsigned char var_13 = (unsigned char)112;
int zero = 0;
unsigned char var_14 = (unsigned char)46;
long long int var_15 = -7549354439772390361LL;
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
