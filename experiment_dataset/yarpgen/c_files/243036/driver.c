#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8246630235194834696LL;
short var_3 = (short)-15566;
unsigned short var_7 = (unsigned short)63089;
unsigned long long int var_9 = 5488882962326693563ULL;
int zero = 0;
int var_16 = 425758883;
signed char var_17 = (signed char)12;
short var_18 = (short)24075;
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
