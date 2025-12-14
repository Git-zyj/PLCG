#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 3832461685U;
short var_5 = (short)-20667;
long long int var_6 = -720566058494148979LL;
unsigned long long int var_9 = 17440735164298631035ULL;
int zero = 0;
short var_10 = (short)-4955;
int var_11 = -1403153621;
int var_12 = -597292271;
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
