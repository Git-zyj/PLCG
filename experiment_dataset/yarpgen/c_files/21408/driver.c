#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2069173638;
short var_10 = (short)-10041;
signed char var_16 = (signed char)6;
int zero = 0;
unsigned long long int var_18 = 17187635323646239200ULL;
signed char var_19 = (signed char)69;
signed char var_20 = (signed char)-22;
unsigned long long int var_21 = 10582514120305330952ULL;
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
