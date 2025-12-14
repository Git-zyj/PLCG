#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)141;
short var_8 = (short)-14943;
int var_10 = -908861014;
short var_12 = (short)19488;
_Bool var_13 = (_Bool)1;
unsigned int var_19 = 4158486144U;
int zero = 0;
long long int var_20 = 1311945168130688201LL;
signed char var_21 = (signed char)-2;
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
