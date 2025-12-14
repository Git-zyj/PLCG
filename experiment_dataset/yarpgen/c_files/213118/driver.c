#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
int var_7 = 113574856;
signed char var_14 = (signed char)-91;
int zero = 0;
unsigned short var_16 = (unsigned short)6532;
unsigned char var_17 = (unsigned char)134;
unsigned short var_18 = (unsigned short)5466;
void init() {
}

void checksum() {
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
