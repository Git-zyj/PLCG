#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)20;
unsigned char var_5 = (unsigned char)16;
long long int var_7 = 8399136648852964431LL;
signed char var_10 = (signed char)-13;
long long int var_11 = 3899059567715692237LL;
int zero = 0;
long long int var_17 = -871832958201461335LL;
long long int var_18 = 7241141806342215551LL;
signed char var_19 = (signed char)97;
signed char var_20 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
