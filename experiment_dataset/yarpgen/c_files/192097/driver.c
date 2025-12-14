#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18839;
unsigned short var_1 = (unsigned short)3999;
long long int var_5 = 656017077175737164LL;
unsigned short var_9 = (unsigned short)20833;
int zero = 0;
unsigned short var_15 = (unsigned short)37519;
short var_16 = (short)-28655;
signed char var_17 = (signed char)-72;
signed char var_18 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
