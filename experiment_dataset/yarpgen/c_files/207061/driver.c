#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)28898;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)215;
unsigned short var_21 = (unsigned short)7104;
long long int var_22 = -7186022224012249124LL;
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
