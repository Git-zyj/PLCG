#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12425145222221942917ULL;
unsigned short var_3 = (unsigned short)15429;
short var_6 = (short)-8975;
signed char var_7 = (signed char)115;
int zero = 0;
unsigned char var_10 = (unsigned char)205;
unsigned char var_11 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
