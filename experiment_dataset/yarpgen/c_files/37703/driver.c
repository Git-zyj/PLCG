#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
long long int var_1 = 1466126757771716825LL;
unsigned short var_4 = (unsigned short)110;
short var_5 = (short)26580;
unsigned long long int var_13 = 7801701099874264794ULL;
short var_14 = (short)21977;
unsigned int var_16 = 4142156055U;
short var_17 = (short)28999;
int zero = 0;
unsigned short var_19 = (unsigned short)62731;
unsigned char var_20 = (unsigned char)254;
int var_21 = -1706020520;
long long int var_22 = -7443223363031463496LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
