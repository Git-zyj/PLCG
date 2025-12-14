#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3108204511U;
long long int var_3 = 5976637936095394739LL;
int var_6 = -1641621333;
unsigned char var_7 = (unsigned char)199;
int var_12 = 1819185242;
int var_13 = 35154476;
int zero = 0;
long long int var_16 = 809496049896430195LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 2248718581333672232LL;
short var_19 = (short)15571;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
