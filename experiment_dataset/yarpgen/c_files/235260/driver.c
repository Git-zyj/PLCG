#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -398557961;
short var_5 = (short)-29075;
short var_7 = (short)-31619;
unsigned long long int var_10 = 11426721820220555589ULL;
int var_13 = -1091562592;
int zero = 0;
unsigned short var_14 = (unsigned short)57439;
signed char var_15 = (signed char)94;
unsigned short var_16 = (unsigned short)1776;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
