#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)218;
unsigned int var_5 = 2490137860U;
signed char var_6 = (signed char)34;
unsigned char var_7 = (unsigned char)128;
signed char var_8 = (signed char)30;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_12 = (short)-32456;
long long int var_13 = 5809851907643468159LL;
unsigned int var_14 = 3112712024U;
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
