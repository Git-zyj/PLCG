#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)50;
long long int var_4 = -171321641554840154LL;
int var_5 = -754815960;
signed char var_8 = (signed char)-65;
short var_10 = (short)20768;
unsigned char var_12 = (unsigned char)221;
signed char var_13 = (signed char)53;
int zero = 0;
signed char var_15 = (signed char)105;
signed char var_16 = (signed char)35;
unsigned char var_17 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
