#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)-22571;
unsigned long long int var_9 = 17307751615230382126ULL;
unsigned char var_13 = (unsigned char)107;
int zero = 0;
signed char var_15 = (signed char)47;
unsigned long long int var_16 = 7784832065487627204ULL;
unsigned int var_17 = 619119607U;
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
