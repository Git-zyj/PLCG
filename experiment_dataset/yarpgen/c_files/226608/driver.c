#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16127;
unsigned char var_7 = (unsigned char)97;
short var_8 = (short)30754;
signed char var_12 = (signed char)96;
unsigned short var_14 = (unsigned short)22048;
int zero = 0;
signed char var_18 = (signed char)83;
unsigned long long int var_19 = 11589155907579277395ULL;
short var_20 = (short)1393;
void init() {
}

void checksum() {
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
