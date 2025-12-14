#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9087074244439411083LL;
unsigned short var_2 = (unsigned short)19799;
unsigned char var_5 = (unsigned char)92;
short var_12 = (short)-28616;
long long int var_13 = 9126221480378717078LL;
unsigned char var_15 = (unsigned char)105;
int zero = 0;
unsigned char var_17 = (unsigned char)201;
long long int var_18 = -6137065731953243146LL;
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
