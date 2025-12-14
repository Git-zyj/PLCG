#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3340579027564569275LL;
signed char var_5 = (signed char)-89;
signed char var_10 = (signed char)-60;
short var_13 = (short)-25463;
long long int var_15 = -5304703588351450536LL;
unsigned int var_16 = 3898020046U;
int var_17 = 1884072245;
int zero = 0;
signed char var_18 = (signed char)-112;
signed char var_19 = (signed char)-14;
signed char var_20 = (signed char)108;
long long int var_21 = 4372761551342142643LL;
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
