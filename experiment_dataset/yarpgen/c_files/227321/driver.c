#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_7 = (unsigned short)30454;
unsigned char var_8 = (unsigned char)197;
unsigned int var_9 = 3663963346U;
short var_10 = (short)8025;
int zero = 0;
signed char var_12 = (signed char)-93;
long long int var_13 = 6711584496832385412LL;
short var_14 = (short)32460;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
