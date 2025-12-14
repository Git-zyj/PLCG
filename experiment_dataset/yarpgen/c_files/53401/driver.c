#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4173497291U;
long long int var_7 = -3018089604934718356LL;
short var_17 = (short)2998;
int zero = 0;
signed char var_18 = (signed char)-72;
signed char var_19 = (signed char)45;
unsigned int var_20 = 769018630U;
unsigned int var_21 = 3706268489U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
