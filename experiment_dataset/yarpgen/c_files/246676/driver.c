#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6731020127921179874LL;
unsigned char var_5 = (unsigned char)11;
unsigned char var_6 = (unsigned char)100;
int var_7 = -2041568955;
unsigned long long int var_8 = 2853557679268919779ULL;
unsigned char var_9 = (unsigned char)88;
long long int var_10 = -6850746778621321542LL;
short var_12 = (short)-7994;
unsigned char var_14 = (unsigned char)34;
int zero = 0;
unsigned long long int var_15 = 13299284118347701812ULL;
unsigned char var_16 = (unsigned char)163;
unsigned long long int var_17 = 8356975087458840783ULL;
unsigned char var_18 = (unsigned char)173;
long long int var_19 = -3779400381503674206LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
