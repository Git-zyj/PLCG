#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
long long int var_2 = -3550938553332094467LL;
signed char var_4 = (signed char)-124;
long long int var_5 = -7732074467918391484LL;
unsigned int var_6 = 3123003972U;
long long int var_7 = 7268575295192345841LL;
unsigned long long int var_8 = 1955059308135064810ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)64477;
long long int var_11 = -809196629867865236LL;
signed char var_12 = (signed char)-108;
unsigned char var_13 = (unsigned char)94;
short var_14 = (short)28145;
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
