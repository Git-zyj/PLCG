#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25314;
unsigned char var_3 = (unsigned char)140;
short var_6 = (short)17028;
long long int var_11 = -6543283905116199364LL;
int zero = 0;
unsigned long long int var_12 = 13689824841808197492ULL;
signed char var_13 = (signed char)-96;
unsigned char var_14 = (unsigned char)63;
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
