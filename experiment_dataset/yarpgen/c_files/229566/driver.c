#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5046571766789167791LL;
unsigned char var_2 = (unsigned char)167;
unsigned short var_5 = (unsigned short)47483;
unsigned int var_10 = 2588254767U;
unsigned int var_12 = 2993098720U;
int zero = 0;
unsigned char var_20 = (unsigned char)101;
long long int var_21 = -2913652893317051232LL;
signed char var_22 = (signed char)94;
signed char var_23 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
