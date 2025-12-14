#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32588;
unsigned long long int var_3 = 2245025388608306070ULL;
unsigned char var_5 = (unsigned char)34;
long long int var_9 = -6855639604166688847LL;
int zero = 0;
short var_10 = (short)14541;
_Bool var_11 = (_Bool)0;
int var_12 = -2124056953;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
