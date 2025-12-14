#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4242151210052820100ULL;
int var_1 = -948499252;
unsigned long long int var_2 = 12921941165426687923ULL;
_Bool var_3 = (_Bool)1;
int var_4 = 555130792;
unsigned short var_5 = (unsigned short)44000;
int var_7 = -447973116;
unsigned char var_9 = (unsigned char)89;
int zero = 0;
int var_10 = -312998677;
short var_11 = (short)-2805;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16145695149029483940ULL;
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
