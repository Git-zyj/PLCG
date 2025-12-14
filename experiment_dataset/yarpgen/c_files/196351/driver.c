#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)91;
_Bool var_9 = (_Bool)1;
unsigned int var_15 = 1195125120U;
unsigned long long int var_16 = 6413294025298705472ULL;
unsigned char var_17 = (unsigned char)2;
int zero = 0;
long long int var_20 = 5842848663867143314LL;
int var_21 = -900861468;
long long int var_22 = 8920441413465348072LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
