#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
unsigned int var_3 = 2115717117U;
short var_5 = (short)-16140;
unsigned long long int var_10 = 1193314810746778376ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)31941;
unsigned char var_14 = (unsigned char)140;
unsigned char var_15 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
