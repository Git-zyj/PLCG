#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10463818850122685407ULL;
unsigned short var_3 = (unsigned short)34758;
unsigned int var_7 = 2335802789U;
short var_8 = (short)8658;
signed char var_9 = (signed char)-102;
int zero = 0;
unsigned short var_10 = (unsigned short)32856;
short var_11 = (short)27811;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
