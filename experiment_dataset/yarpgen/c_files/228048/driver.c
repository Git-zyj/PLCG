#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47905;
signed char var_6 = (signed char)27;
short var_9 = (short)23784;
long long int var_16 = 2214530387172480854LL;
int zero = 0;
long long int var_17 = 5602675688682574031LL;
long long int var_18 = -8090418547297001345LL;
void init() {
}

void checksum() {
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
