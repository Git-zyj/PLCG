#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14522674716360309112ULL;
unsigned int var_9 = 2003907157U;
unsigned long long int var_10 = 8073304482421552594ULL;
short var_12 = (short)-30355;
unsigned long long int var_13 = 11027923010577859166ULL;
signed char var_16 = (signed char)-2;
signed char var_18 = (signed char)88;
int zero = 0;
unsigned char var_20 = (unsigned char)15;
unsigned int var_21 = 1219766085U;
unsigned int var_22 = 3142663643U;
unsigned short var_23 = (unsigned short)34377;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
