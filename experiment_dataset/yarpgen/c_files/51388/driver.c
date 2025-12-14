#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4865499864065624467LL;
unsigned int var_2 = 644602229U;
unsigned char var_3 = (unsigned char)52;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 16581268841246275069ULL;
unsigned short var_9 = (unsigned short)36710;
int zero = 0;
long long int var_10 = 8877151419950190566LL;
short var_11 = (short)-30912;
short var_12 = (short)21900;
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
