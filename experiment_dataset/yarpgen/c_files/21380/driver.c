#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16712696872834990445ULL;
unsigned char var_6 = (unsigned char)194;
unsigned short var_13 = (unsigned short)38356;
short var_16 = (short)9749;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2047401042U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
