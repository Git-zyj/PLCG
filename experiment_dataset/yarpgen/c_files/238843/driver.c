#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)37;
long long int var_2 = 8328103379078109603LL;
unsigned short var_3 = (unsigned short)5950;
short var_4 = (short)1436;
short var_5 = (short)8371;
signed char var_6 = (signed char)-122;
short var_7 = (short)-20960;
int var_8 = 1536355468;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 3122643766U;
unsigned long long int var_11 = 9515057684811685156ULL;
signed char var_12 = (signed char)-41;
short var_13 = (short)22419;
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
