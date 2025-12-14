#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 757176169;
unsigned int var_7 = 1519768522U;
unsigned short var_11 = (unsigned short)62509;
long long int var_14 = 2074638576130854155LL;
int zero = 0;
signed char var_20 = (signed char)-91;
short var_21 = (short)3225;
signed char var_22 = (signed char)41;
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
