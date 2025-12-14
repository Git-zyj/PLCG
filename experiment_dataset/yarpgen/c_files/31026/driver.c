#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60347;
unsigned char var_6 = (unsigned char)196;
long long int var_8 = -8185085261691825940LL;
unsigned short var_11 = (unsigned short)47750;
unsigned int var_13 = 1820841682U;
signed char var_14 = (signed char)126;
unsigned char var_15 = (unsigned char)151;
unsigned char var_17 = (unsigned char)160;
int zero = 0;
unsigned short var_18 = (unsigned short)60685;
short var_19 = (short)9323;
int var_20 = -596024612;
short var_21 = (short)-832;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
