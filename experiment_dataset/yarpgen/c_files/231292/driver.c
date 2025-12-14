#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1956261574U;
short var_3 = (short)-2027;
int var_9 = -225352020;
unsigned int var_10 = 3009735942U;
int zero = 0;
signed char var_17 = (signed char)-99;
unsigned short var_18 = (unsigned short)13442;
signed char var_19 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
