#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2376914871U;
unsigned short var_2 = (unsigned short)37440;
long long int var_4 = -7932943360847181232LL;
short var_8 = (short)-7414;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-54;
unsigned short var_12 = (unsigned short)61307;
short var_13 = (short)28964;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
