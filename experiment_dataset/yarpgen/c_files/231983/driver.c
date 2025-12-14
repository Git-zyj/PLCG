#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
short var_4 = (short)20385;
unsigned char var_5 = (unsigned char)141;
unsigned int var_6 = 919341477U;
unsigned short var_9 = (unsigned short)61623;
unsigned char var_10 = (unsigned char)217;
int zero = 0;
unsigned int var_11 = 4076276168U;
short var_12 = (short)-20230;
unsigned long long int var_13 = 15644652244325487230ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
