#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)37;
unsigned char var_6 = (unsigned char)17;
unsigned int var_8 = 1593165749U;
unsigned int var_11 = 337619632U;
unsigned char var_12 = (unsigned char)193;
unsigned char var_13 = (unsigned char)19;
unsigned short var_16 = (unsigned short)46797;
unsigned long long int var_18 = 3818522735275974386ULL;
int zero = 0;
unsigned int var_19 = 527276253U;
unsigned char var_20 = (unsigned char)205;
short var_21 = (short)21244;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
