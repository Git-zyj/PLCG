#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17629;
long long int var_1 = -6203249868434872248LL;
unsigned char var_2 = (unsigned char)206;
unsigned char var_4 = (unsigned char)140;
short var_5 = (short)24147;
unsigned int var_9 = 1267178824U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1736458500U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
