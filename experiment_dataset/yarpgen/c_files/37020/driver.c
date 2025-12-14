#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)31;
unsigned long long int var_8 = 17291035950957457348ULL;
unsigned long long int var_13 = 18372537836546707108ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)20493;
signed char var_15 = (signed char)2;
_Bool var_16 = (_Bool)0;
short var_17 = (short)17357;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
