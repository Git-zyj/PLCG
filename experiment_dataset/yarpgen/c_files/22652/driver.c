#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-112;
unsigned char var_2 = (unsigned char)90;
unsigned short var_3 = (unsigned short)33504;
signed char var_6 = (signed char)9;
signed char var_12 = (signed char)-93;
int zero = 0;
unsigned long long int var_13 = 14587322917314271876ULL;
unsigned char var_14 = (unsigned char)78;
signed char var_15 = (signed char)-13;
short var_16 = (short)-24217;
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
