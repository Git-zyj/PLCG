#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64100;
long long int var_2 = 5985090919191468175LL;
signed char var_4 = (signed char)75;
unsigned short var_5 = (unsigned short)15753;
unsigned short var_10 = (unsigned short)341;
unsigned long long int var_11 = 3550792765975833814ULL;
unsigned long long int var_12 = 15712999701466120607ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)35734;
unsigned long long int var_19 = 18243056458602581504ULL;
unsigned int var_20 = 2279799685U;
unsigned char var_21 = (unsigned char)60;
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
