#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-122;
long long int var_3 = -5777759710094961876LL;
unsigned short var_12 = (unsigned short)57188;
int zero = 0;
signed char var_14 = (signed char)121;
unsigned short var_15 = (unsigned short)58119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
