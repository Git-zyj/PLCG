#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)880;
long long int var_3 = 8411027680581715084LL;
long long int var_5 = -6089261789169656032LL;
long long int var_9 = -1294971306993449034LL;
short var_12 = (short)-13347;
signed char var_13 = (signed char)30;
long long int var_14 = -5365830440060188953LL;
int zero = 0;
unsigned int var_20 = 2759671393U;
unsigned short var_21 = (unsigned short)54514;
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
