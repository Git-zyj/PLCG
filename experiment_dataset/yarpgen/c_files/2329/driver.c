#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)59;
unsigned long long int var_3 = 4616312354696376097ULL;
signed char var_4 = (signed char)-120;
unsigned short var_7 = (unsigned short)39711;
int var_9 = 2064972537;
unsigned short var_10 = (unsigned short)13523;
short var_11 = (short)502;
int zero = 0;
unsigned short var_12 = (unsigned short)30346;
unsigned short var_13 = (unsigned short)63122;
short var_14 = (short)-9937;
unsigned char var_15 = (unsigned char)188;
short var_16 = (short)32554;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
