#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1826378839U;
short var_5 = (short)9724;
int var_6 = 969411458;
unsigned long long int var_10 = 518703610468469406ULL;
int var_11 = 1070321520;
unsigned int var_12 = 1070109527U;
short var_15 = (short)18327;
unsigned long long int var_16 = 15550246950829700849ULL;
int zero = 0;
short var_18 = (short)20332;
short var_19 = (short)-16107;
unsigned int var_20 = 657040196U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
