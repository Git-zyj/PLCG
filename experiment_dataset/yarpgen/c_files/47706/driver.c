#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1742856814;
signed char var_3 = (signed char)-6;
unsigned int var_5 = 1173562475U;
long long int var_9 = -5487769086704068659LL;
unsigned char var_13 = (unsigned char)184;
int zero = 0;
unsigned short var_14 = (unsigned short)24897;
unsigned char var_15 = (unsigned char)128;
unsigned int var_16 = 3363333401U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
