#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)9;
short var_5 = (short)18520;
signed char var_7 = (signed char)99;
unsigned char var_9 = (unsigned char)193;
int zero = 0;
long long int var_10 = 6244193997729391346LL;
unsigned char var_11 = (unsigned char)81;
unsigned short var_12 = (unsigned short)57759;
unsigned int var_13 = 2958976750U;
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
