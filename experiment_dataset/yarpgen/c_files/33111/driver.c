#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27887;
signed char var_3 = (signed char)87;
unsigned int var_4 = 1721062984U;
int var_9 = 1361887425;
unsigned short var_12 = (unsigned short)1283;
int zero = 0;
unsigned char var_15 = (unsigned char)203;
unsigned int var_16 = 1595418412U;
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
