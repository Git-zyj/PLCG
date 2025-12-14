#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7474221521317688478LL;
signed char var_7 = (signed char)112;
_Bool var_12 = (_Bool)0;
unsigned int var_17 = 1353209555U;
int zero = 0;
unsigned short var_20 = (unsigned short)37906;
unsigned short var_21 = (unsigned short)39031;
short var_22 = (short)2183;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
