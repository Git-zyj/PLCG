#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3681023614U;
unsigned short var_5 = (unsigned short)2941;
unsigned short var_12 = (unsigned short)43933;
long long int var_15 = 7838409358047919609LL;
int zero = 0;
unsigned int var_19 = 44734961U;
unsigned short var_20 = (unsigned short)28523;
long long int var_21 = -3675377491564717795LL;
void init() {
}

void checksum() {
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
