#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)19298;
short var_7 = (short)16114;
short var_10 = (short)618;
int zero = 0;
unsigned short var_17 = (unsigned short)15198;
short var_18 = (short)5883;
unsigned long long int var_19 = 537795752589676167ULL;
short var_20 = (short)27238;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
