#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_7 = (short)-5846;
unsigned char var_8 = (unsigned char)91;
int zero = 0;
short var_11 = (short)30030;
unsigned long long int var_12 = 18222458602348382687ULL;
long long int var_13 = 6918225263380990838LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
