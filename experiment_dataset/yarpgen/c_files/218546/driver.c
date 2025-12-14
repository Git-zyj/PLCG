#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)16278;
unsigned short var_5 = (unsigned short)46871;
long long int var_7 = 1876410203124992603LL;
int zero = 0;
unsigned short var_12 = (unsigned short)55146;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)9;
signed char var_15 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
