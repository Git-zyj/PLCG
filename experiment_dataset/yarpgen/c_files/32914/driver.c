#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4780814982255410044LL;
unsigned char var_1 = (unsigned char)34;
unsigned short var_3 = (unsigned short)50230;
unsigned long long int var_5 = 9328036776478481667ULL;
unsigned char var_7 = (unsigned char)117;
long long int var_8 = -5983106363378272804LL;
long long int var_10 = -1287183842402917183LL;
int zero = 0;
short var_11 = (short)4553;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
