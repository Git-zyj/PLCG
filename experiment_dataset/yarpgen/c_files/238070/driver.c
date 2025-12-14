#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15580;
short var_6 = (short)20775;
unsigned long long int var_8 = 10613524294900783306ULL;
unsigned short var_9 = (unsigned short)17255;
unsigned short var_13 = (unsigned short)50034;
int zero = 0;
signed char var_15 = (signed char)82;
unsigned long long int var_16 = 14719491543711091327ULL;
unsigned short var_17 = (unsigned short)26920;
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
