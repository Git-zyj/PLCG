#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13541838223275816325ULL;
int var_2 = 2004091571;
signed char var_3 = (signed char)85;
signed char var_10 = (signed char)34;
int var_13 = 970793392;
signed char var_17 = (signed char)-45;
unsigned char var_18 = (unsigned char)60;
int zero = 0;
short var_20 = (short)-30217;
long long int var_21 = 4960014959094234472LL;
short var_22 = (short)13450;
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
