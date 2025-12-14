#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2122094262;
unsigned short var_7 = (unsigned short)38934;
unsigned long long int var_8 = 649156586595643286ULL;
int zero = 0;
signed char var_10 = (signed char)116;
signed char var_11 = (signed char)108;
short var_12 = (short)-26624;
signed char var_13 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
