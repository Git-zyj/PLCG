#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2307744333U;
signed char var_3 = (signed char)73;
short var_4 = (short)-26242;
unsigned long long int var_5 = 5262420274228260545ULL;
unsigned int var_7 = 1357311735U;
signed char var_8 = (signed char)-38;
unsigned long long int var_10 = 2114690875094534328ULL;
unsigned long long int var_12 = 2637022543303663837ULL;
long long int var_13 = 2604457706070371612LL;
unsigned long long int var_17 = 15710648533953503983ULL;
long long int var_19 = 334745510825458606LL;
int zero = 0;
unsigned char var_20 = (unsigned char)49;
unsigned int var_21 = 1826921032U;
int var_22 = -1108402560;
void init() {
}

void checksum() {
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
