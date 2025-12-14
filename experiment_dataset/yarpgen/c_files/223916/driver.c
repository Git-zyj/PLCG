#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8248082867967184611LL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-30213;
unsigned char var_9 = (unsigned char)215;
unsigned long long int var_15 = 2769106390153881802ULL;
unsigned long long int var_16 = 8473086359530224126ULL;
int zero = 0;
short var_20 = (short)12894;
unsigned short var_21 = (unsigned short)25620;
long long int var_22 = 570168679479941141LL;
unsigned short var_23 = (unsigned short)59379;
int var_24 = 2053704931;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
