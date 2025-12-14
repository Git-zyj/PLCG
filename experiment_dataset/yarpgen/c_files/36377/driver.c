#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)50;
long long int var_2 = 6520213663153981394LL;
long long int var_3 = 2297990501067649251LL;
long long int var_4 = -7598957040326280952LL;
short var_8 = (short)-30;
unsigned long long int var_9 = 13941480833530346488ULL;
int zero = 0;
unsigned long long int var_10 = 13511342934609670833ULL;
short var_11 = (short)-18928;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)43207;
unsigned short var_14 = (unsigned short)35225;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
