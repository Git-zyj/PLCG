#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1457401989U;
int var_5 = -531025868;
short var_8 = (short)-28217;
int zero = 0;
unsigned int var_10 = 1539538229U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 14299746145841342499ULL;
unsigned char var_13 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
