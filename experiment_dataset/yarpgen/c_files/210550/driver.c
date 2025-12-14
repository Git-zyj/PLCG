#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
short var_4 = (short)-16209;
long long int var_5 = 7845057925553621375LL;
long long int var_6 = 1628139470387825773LL;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-6596;
int zero = 0;
short var_20 = (short)-5802;
short var_21 = (short)-27211;
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
