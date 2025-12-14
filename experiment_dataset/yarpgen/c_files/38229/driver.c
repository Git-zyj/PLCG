#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5061361946343260252LL;
unsigned int var_4 = 2224833020U;
unsigned char var_9 = (unsigned char)97;
int zero = 0;
unsigned char var_12 = (unsigned char)238;
unsigned int var_13 = 1572047772U;
short var_14 = (short)13042;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
