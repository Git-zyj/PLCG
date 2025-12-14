#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3334408143317761928LL;
short var_4 = (short)-2017;
signed char var_8 = (signed char)-60;
short var_9 = (short)-9130;
int zero = 0;
int var_15 = -972958650;
long long int var_16 = -2745750963421413999LL;
signed char var_17 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
