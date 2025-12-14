#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30494;
unsigned short var_1 = (unsigned short)64372;
unsigned short var_7 = (unsigned short)46640;
unsigned short var_11 = (unsigned short)24635;
unsigned short var_12 = (unsigned short)49738;
unsigned short var_15 = (unsigned short)57610;
unsigned short var_17 = (unsigned short)38249;
int zero = 0;
unsigned short var_18 = (unsigned short)49163;
unsigned short var_19 = (unsigned short)55002;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
