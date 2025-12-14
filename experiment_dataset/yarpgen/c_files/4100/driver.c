#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-415;
unsigned char var_12 = (unsigned char)26;
int var_16 = -583555752;
long long int var_17 = -1032436475395556238LL;
int var_18 = -1950250902;
int zero = 0;
int var_19 = 1275011375;
unsigned char var_20 = (unsigned char)222;
short var_21 = (short)1818;
unsigned long long int var_22 = 8474428198822450841ULL;
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
