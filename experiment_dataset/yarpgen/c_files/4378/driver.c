#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4774;
int var_4 = 848826612;
signed char var_5 = (signed char)89;
signed char var_11 = (signed char)66;
int zero = 0;
short var_16 = (short)8580;
unsigned short var_17 = (unsigned short)41784;
void init() {
}

void checksum() {
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
