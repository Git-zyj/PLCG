#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 930254732;
unsigned int var_1 = 3531378472U;
long long int var_3 = 5388348570389339886LL;
unsigned char var_4 = (unsigned char)69;
int var_5 = -1609580243;
unsigned short var_7 = (unsigned short)13156;
short var_8 = (short)-11842;
signed char var_10 = (signed char)52;
int zero = 0;
short var_15 = (short)29;
unsigned short var_16 = (unsigned short)32112;
signed char var_17 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
