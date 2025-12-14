#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)22;
_Bool var_3 = (_Bool)1;
unsigned short var_9 = (unsigned short)16933;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)31909;
unsigned short var_14 = (unsigned short)45067;
int var_15 = -1862706253;
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
