#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
_Bool var_1 = (_Bool)1;
long long int var_6 = -890551958602827277LL;
int zero = 0;
unsigned int var_12 = 3600885516U;
short var_13 = (short)-20103;
long long int var_14 = 3041199061254477060LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
