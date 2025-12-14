#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24050;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)47428;
signed char var_8 = (signed char)-16;
short var_12 = (short)27354;
signed char var_13 = (signed char)-57;
int zero = 0;
unsigned char var_15 = (unsigned char)133;
short var_16 = (short)-17120;
void init() {
}

void checksum() {
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
