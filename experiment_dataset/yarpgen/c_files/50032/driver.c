#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17837;
unsigned int var_7 = 4203837305U;
int var_10 = -1820899828;
int zero = 0;
short var_19 = (short)955;
unsigned char var_20 = (unsigned char)235;
unsigned char var_21 = (unsigned char)237;
int var_22 = 1370929679;
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
