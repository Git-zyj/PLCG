#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7797149540153598354LL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)176;
short var_10 = (short)7693;
unsigned char var_13 = (unsigned char)26;
signed char var_15 = (signed char)118;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)12876;
unsigned char var_21 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
