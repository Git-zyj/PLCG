#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5034321408541826827ULL;
unsigned long long int var_3 = 3602046447163507113ULL;
signed char var_5 = (signed char)-49;
unsigned long long int var_14 = 18293446601776103604ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-21390;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
