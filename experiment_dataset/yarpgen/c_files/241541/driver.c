#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8916118085955583251ULL;
short var_1 = (short)31755;
unsigned long long int var_3 = 8485957484911156334ULL;
unsigned int var_5 = 695254198U;
short var_8 = (short)7779;
unsigned short var_9 = (unsigned short)51078;
int var_10 = -2018432150;
unsigned int var_11 = 1357955921U;
int zero = 0;
unsigned short var_12 = (unsigned short)48438;
signed char var_13 = (signed char)-123;
unsigned short var_14 = (unsigned short)53342;
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
