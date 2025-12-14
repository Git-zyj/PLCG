#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 272459575;
long long int var_6 = 985600984546240321LL;
unsigned char var_11 = (unsigned char)115;
unsigned short var_12 = (unsigned short)65416;
unsigned long long int var_17 = 502898657477081065ULL;
int zero = 0;
unsigned int var_18 = 1313092574U;
unsigned char var_19 = (unsigned char)21;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
