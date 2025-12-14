#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
unsigned long long int var_4 = 8058408531484767472ULL;
int var_6 = -2098514764;
unsigned short var_7 = (unsigned short)55711;
int zero = 0;
signed char var_12 = (signed char)-114;
int var_13 = 851137373;
unsigned char var_14 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
