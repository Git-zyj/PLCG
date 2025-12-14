#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2134294278;
unsigned char var_4 = (unsigned char)142;
long long int var_5 = -3131849651811832697LL;
signed char var_6 = (signed char)89;
short var_11 = (short)12236;
int zero = 0;
int var_14 = -1764464366;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
