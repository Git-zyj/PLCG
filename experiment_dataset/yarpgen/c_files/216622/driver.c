#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-4199;
unsigned short var_12 = (unsigned short)25539;
signed char var_14 = (signed char)66;
unsigned char var_15 = (unsigned char)152;
int zero = 0;
unsigned long long int var_19 = 7398398973515082048ULL;
long long int var_20 = -574632804448677087LL;
long long int var_21 = 4481129462233213599LL;
void init() {
}

void checksum() {
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
