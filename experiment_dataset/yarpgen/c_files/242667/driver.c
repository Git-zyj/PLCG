#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-15;
signed char var_3 = (signed char)125;
unsigned long long int var_5 = 492344799488549221ULL;
unsigned short var_9 = (unsigned short)52047;
signed char var_16 = (signed char)-49;
int zero = 0;
unsigned short var_19 = (unsigned short)55725;
unsigned short var_20 = (unsigned short)57431;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
