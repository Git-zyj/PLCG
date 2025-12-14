#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)47;
short var_3 = (short)27712;
short var_5 = (short)-26848;
long long int var_9 = 8895613508308874442LL;
int zero = 0;
signed char var_10 = (signed char)-48;
int var_11 = -823737640;
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
