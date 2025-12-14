#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20583;
unsigned short var_3 = (unsigned short)47822;
long long int var_8 = -2879403645722784425LL;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)103;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)10;
unsigned char var_18 = (unsigned char)203;
unsigned char var_19 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
