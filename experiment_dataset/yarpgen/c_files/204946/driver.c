#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1008109386;
unsigned short var_3 = (unsigned short)57456;
_Bool var_6 = (_Bool)1;
short var_8 = (short)6153;
int zero = 0;
int var_10 = -1181406697;
unsigned short var_11 = (unsigned short)3125;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
