#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
int var_1 = -1149500789;
short var_2 = (short)-31436;
unsigned int var_5 = 3152864354U;
unsigned short var_7 = (unsigned short)27151;
int zero = 0;
unsigned short var_10 = (unsigned short)18023;
int var_11 = 774958496;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
