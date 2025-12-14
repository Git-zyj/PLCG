#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9197372695324158697LL;
unsigned short var_6 = (unsigned short)39180;
signed char var_9 = (signed char)49;
int zero = 0;
signed char var_10 = (signed char)13;
signed char var_11 = (signed char)-92;
long long int var_12 = -2044113034287184454LL;
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
