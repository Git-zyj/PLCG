#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2140256800;
int var_2 = -694488553;
long long int var_3 = 4867087425910997972LL;
unsigned short var_7 = (unsigned short)27847;
long long int var_10 = 9213781844796893646LL;
long long int var_11 = -891768605721703909LL;
int var_12 = 1068240604;
unsigned int var_13 = 830198414U;
int var_18 = 1931702682;
int zero = 0;
signed char var_20 = (signed char)-38;
long long int var_21 = 6409808754411738369LL;
unsigned short var_22 = (unsigned short)29668;
short var_23 = (short)-10951;
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
