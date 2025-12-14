#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 320823801;
long long int var_7 = 5519005606017044567LL;
int var_13 = -1152539364;
int zero = 0;
signed char var_18 = (signed char)-112;
unsigned int var_19 = 1133074312U;
long long int var_20 = 634076437492181373LL;
unsigned int var_21 = 4034604353U;
long long int var_22 = -2192131150585418866LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
