#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4291390248U;
_Bool var_1 = (_Bool)0;
unsigned char var_5 = (unsigned char)118;
long long int var_6 = -8791628184222527218LL;
signed char var_7 = (signed char)-13;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2037964588U;
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
