#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15612260487682417368ULL;
unsigned short var_2 = (unsigned short)7733;
short var_8 = (short)15702;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)19892;
int zero = 0;
unsigned char var_14 = (unsigned char)22;
unsigned short var_15 = (unsigned short)1339;
unsigned char var_16 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
