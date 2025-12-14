#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
signed char var_1 = (signed char)44;
long long int var_3 = 3670386877015141896LL;
int var_4 = -113339751;
unsigned char var_5 = (unsigned char)33;
long long int var_7 = -2884057872774939114LL;
short var_10 = (short)-737;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 1932507267;
void init() {
}

void checksum() {
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
