#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1105815961;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-22195;
unsigned long long int var_3 = 13751071197238828640ULL;
short var_10 = (short)-22850;
unsigned char var_12 = (unsigned char)99;
int var_14 = -830330533;
int var_17 = -475476718;
unsigned long long int var_18 = 2393970545959183491ULL;
long long int var_19 = 3405952976528096483LL;
int zero = 0;
unsigned int var_20 = 440067536U;
unsigned short var_21 = (unsigned short)26688;
int var_22 = -60999519;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
