#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1523994561;
int var_4 = -1706335403;
long long int var_6 = 8965654688954415391LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = -8995277320598604271LL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)41438;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-32178;
int zero = 0;
long long int var_18 = -5334176724677704655LL;
unsigned char var_19 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
