#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)89;
_Bool var_6 = (_Bool)1;
short var_14 = (short)-22210;
unsigned char var_15 = (unsigned char)204;
short var_16 = (short)-4290;
int zero = 0;
int var_20 = 816151882;
unsigned int var_21 = 3503068007U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
