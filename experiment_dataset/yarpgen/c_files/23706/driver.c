#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13072;
short var_4 = (short)-1525;
signed char var_5 = (signed char)-108;
unsigned short var_7 = (unsigned short)2502;
int zero = 0;
unsigned long long int var_18 = 13491396827851967198ULL;
unsigned long long int var_19 = 10260601777785586501ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
