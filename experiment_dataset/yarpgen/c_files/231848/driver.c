#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
unsigned short var_3 = (unsigned short)24856;
signed char var_4 = (signed char)13;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)17705;
int zero = 0;
long long int var_12 = -4692844650421246933LL;
signed char var_13 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
