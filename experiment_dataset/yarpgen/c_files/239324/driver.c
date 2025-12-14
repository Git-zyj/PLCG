#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-6398;
unsigned short var_7 = (unsigned short)57738;
int zero = 0;
unsigned long long int var_12 = 8023615554217893836ULL;
unsigned long long int var_13 = 8283015433764060725ULL;
unsigned int var_14 = 4115540034U;
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
