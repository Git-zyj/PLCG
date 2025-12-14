#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8386;
short var_8 = (short)-10610;
short var_10 = (short)-9749;
long long int var_11 = -8559563948262766547LL;
short var_12 = (short)6169;
int zero = 0;
long long int var_16 = 5875810354981729830LL;
unsigned int var_17 = 4027984984U;
short var_18 = (short)3536;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
