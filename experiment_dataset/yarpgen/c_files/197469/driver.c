#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)149;
long long int var_5 = 1789596321567893580LL;
unsigned short var_9 = (unsigned short)16615;
int zero = 0;
unsigned short var_10 = (unsigned short)28086;
signed char var_11 = (signed char)-22;
unsigned char var_12 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
