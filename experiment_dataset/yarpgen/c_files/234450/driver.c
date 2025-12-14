#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2112866265;
unsigned int var_11 = 2000615962U;
short var_12 = (short)31664;
unsigned char var_13 = (unsigned char)183;
int zero = 0;
unsigned char var_17 = (unsigned char)55;
long long int var_18 = 5150177041009692926LL;
_Bool var_19 = (_Bool)0;
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
