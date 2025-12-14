#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
unsigned char var_4 = (unsigned char)126;
unsigned int var_6 = 1104133041U;
unsigned short var_7 = (unsigned short)2843;
signed char var_11 = (signed char)-109;
int zero = 0;
unsigned int var_12 = 1105813358U;
short var_13 = (short)-15250;
short var_14 = (short)9374;
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
