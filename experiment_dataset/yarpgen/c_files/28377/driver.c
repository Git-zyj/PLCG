#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)99;
unsigned long long int var_10 = 6211564305671295805ULL;
long long int var_11 = -4229757572009306302LL;
unsigned char var_15 = (unsigned char)81;
int zero = 0;
signed char var_18 = (signed char)75;
signed char var_19 = (signed char)-39;
signed char var_20 = (signed char)114;
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
