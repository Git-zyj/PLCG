#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4090576533930942793ULL;
unsigned short var_7 = (unsigned short)30984;
unsigned short var_8 = (unsigned short)8739;
long long int var_10 = -48088088248097791LL;
short var_13 = (short)14285;
int zero = 0;
signed char var_17 = (signed char)86;
unsigned short var_18 = (unsigned short)39364;
signed char var_19 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
