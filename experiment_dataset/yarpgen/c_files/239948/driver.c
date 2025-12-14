#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2422509483836183897LL;
int var_1 = 1599893648;
unsigned char var_2 = (unsigned char)224;
long long int var_4 = 8545536555156827711LL;
int var_6 = 1467747974;
long long int var_7 = -2334640942298757224LL;
unsigned long long int var_8 = 2821453612614593311ULL;
unsigned long long int var_10 = 1941675614430049649ULL;
unsigned int var_11 = 1203371973U;
int zero = 0;
unsigned int var_13 = 4020695282U;
int var_14 = -298837943;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
