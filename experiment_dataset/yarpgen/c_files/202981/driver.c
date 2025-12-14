#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)11449;
signed char var_8 = (signed char)79;
unsigned short var_11 = (unsigned short)50094;
long long int var_13 = -5792296752281276329LL;
int zero = 0;
signed char var_16 = (signed char)51;
long long int var_17 = 5103652821670750105LL;
int var_18 = -1311022826;
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
