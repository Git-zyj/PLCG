#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)45;
unsigned long long int var_4 = 13457961797044991683ULL;
int zero = 0;
short var_10 = (short)19199;
unsigned short var_11 = (unsigned short)46648;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
