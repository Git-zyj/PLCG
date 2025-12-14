#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)61755;
unsigned char var_2 = (unsigned char)67;
int var_3 = -1003493666;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3286453234U;
long long int var_9 = -4351660869620349640LL;
int zero = 0;
short var_10 = (short)22106;
long long int var_11 = 1600048069407594078LL;
unsigned char var_12 = (unsigned char)243;
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
