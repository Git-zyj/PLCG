#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 347497917U;
unsigned short var_5 = (unsigned short)63167;
signed char var_6 = (signed char)95;
short var_7 = (short)32653;
int var_8 = 1482791469;
unsigned int var_10 = 1574564531U;
long long int var_11 = 338812527843202569LL;
int zero = 0;
unsigned char var_13 = (unsigned char)170;
short var_14 = (short)-6492;
signed char var_15 = (signed char)-79;
unsigned char var_16 = (unsigned char)69;
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
