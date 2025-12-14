#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64333;
unsigned char var_2 = (unsigned char)108;
short var_4 = (short)8523;
unsigned long long int var_10 = 3453058041224520650ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)57702;
short var_13 = (short)-23373;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
