#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2395952632683968751ULL;
unsigned long long int var_6 = 4899763834199015031ULL;
signed char var_7 = (signed char)87;
short var_11 = (short)21797;
unsigned char var_13 = (unsigned char)80;
unsigned char var_15 = (unsigned char)244;
int zero = 0;
unsigned char var_16 = (unsigned char)59;
short var_17 = (short)-20670;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
