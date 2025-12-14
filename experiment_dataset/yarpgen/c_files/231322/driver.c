#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24788;
signed char var_3 = (signed char)-12;
unsigned short var_7 = (unsigned short)37644;
int var_8 = 1133893601;
short var_9 = (short)15935;
unsigned int var_17 = 1512044076U;
unsigned short var_18 = (unsigned short)5760;
int zero = 0;
int var_20 = -1025102679;
signed char var_21 = (signed char)53;
unsigned int var_22 = 1719696359U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
