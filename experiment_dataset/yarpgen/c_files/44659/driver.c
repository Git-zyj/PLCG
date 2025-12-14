#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)64;
signed char var_2 = (signed char)41;
signed char var_4 = (signed char)-112;
int var_5 = 414209215;
unsigned short var_10 = (unsigned short)1461;
unsigned short var_11 = (unsigned short)16585;
signed char var_12 = (signed char)-17;
int zero = 0;
signed char var_16 = (signed char)57;
int var_17 = 1485463160;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
