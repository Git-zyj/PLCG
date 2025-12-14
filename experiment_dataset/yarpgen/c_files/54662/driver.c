#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 14762898697605016752ULL;
unsigned short var_7 = (unsigned short)34219;
int zero = 0;
unsigned char var_10 = (unsigned char)158;
short var_11 = (short)28117;
unsigned short var_12 = (unsigned short)25470;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
