#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2113108643;
int var_5 = 1654229248;
unsigned short var_7 = (unsigned short)14999;
unsigned short var_13 = (unsigned short)41835;
int zero = 0;
int var_18 = 1879931018;
long long int var_19 = -9209409821035108403LL;
unsigned short var_20 = (unsigned short)10441;
_Bool var_21 = (_Bool)0;
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
