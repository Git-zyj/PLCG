#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2248670738U;
long long int var_7 = -1117878006467528312LL;
int zero = 0;
signed char var_12 = (signed char)-83;
unsigned short var_13 = (unsigned short)556;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)91;
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
