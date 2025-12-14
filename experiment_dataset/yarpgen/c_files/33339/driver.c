#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -255815719;
_Bool var_3 = (_Bool)0;
long long int var_6 = 3690461487580665549LL;
signed char var_7 = (signed char)-32;
long long int var_8 = -8130599199286564876LL;
int zero = 0;
short var_16 = (short)-20099;
unsigned char var_17 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
