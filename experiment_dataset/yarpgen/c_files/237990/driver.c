#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
unsigned long long int var_8 = 889469925480032888ULL;
short var_13 = (short)9484;
int zero = 0;
unsigned char var_16 = (unsigned char)66;
unsigned char var_17 = (unsigned char)190;
signed char var_18 = (signed char)6;
unsigned short var_19 = (unsigned short)11358;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
