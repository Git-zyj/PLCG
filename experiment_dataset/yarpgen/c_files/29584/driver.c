#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-25197;
unsigned int var_7 = 691768705U;
unsigned int var_9 = 3914956895U;
unsigned short var_10 = (unsigned short)43848;
int zero = 0;
long long int var_12 = 2059269589585833402LL;
signed char var_13 = (signed char)-127;
unsigned short var_14 = (unsigned short)62040;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
