#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15206691211166240319ULL;
unsigned int var_1 = 3164943220U;
unsigned long long int var_3 = 72129368427570808ULL;
short var_6 = (short)29084;
int var_11 = -1302094746;
signed char var_13 = (signed char)82;
unsigned short var_15 = (unsigned short)17524;
long long int var_19 = -6508157224518676180LL;
int zero = 0;
signed char var_20 = (signed char)74;
short var_21 = (short)-29570;
void init() {
}

void checksum() {
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
