#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3719695548458927997ULL;
unsigned short var_6 = (unsigned short)6972;
unsigned char var_13 = (unsigned char)23;
int zero = 0;
unsigned long long int var_17 = 13782151109737242651ULL;
short var_18 = (short)19606;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
