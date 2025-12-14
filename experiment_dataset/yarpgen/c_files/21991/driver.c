#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-39;
unsigned int var_4 = 2510889694U;
signed char var_5 = (signed char)83;
unsigned short var_8 = (unsigned short)4116;
int zero = 0;
unsigned short var_11 = (unsigned short)11079;
unsigned int var_12 = 2013890753U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
