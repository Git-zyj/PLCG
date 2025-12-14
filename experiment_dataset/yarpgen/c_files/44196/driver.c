#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35304;
short var_1 = (short)20388;
unsigned int var_2 = 1575053794U;
unsigned char var_3 = (unsigned char)41;
short var_5 = (short)15813;
unsigned short var_6 = (unsigned short)9301;
long long int var_7 = -7643861953641324394LL;
int var_8 = -509371096;
long long int var_11 = -6472084320856197643LL;
short var_12 = (short)-26048;
int zero = 0;
unsigned int var_13 = 1863905034U;
unsigned char var_14 = (unsigned char)38;
void init() {
}

void checksum() {
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
