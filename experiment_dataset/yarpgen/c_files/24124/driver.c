#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31879;
unsigned int var_2 = 1285719546U;
unsigned char var_3 = (unsigned char)122;
unsigned long long int var_8 = 11517231359725709506ULL;
unsigned char var_10 = (unsigned char)92;
int zero = 0;
short var_20 = (short)19076;
short var_21 = (short)15594;
short var_22 = (short)-7457;
unsigned int var_23 = 14307750U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
