#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48520;
signed char var_5 = (signed char)109;
unsigned int var_6 = 1740850901U;
unsigned short var_8 = (unsigned short)34485;
int var_9 = -1484767719;
signed char var_10 = (signed char)110;
int zero = 0;
unsigned long long int var_12 = 5060293253512888993ULL;
unsigned char var_13 = (unsigned char)236;
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
