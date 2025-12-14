#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
int var_1 = 236426576;
short var_2 = (short)13720;
long long int var_4 = 8850309547092191101LL;
unsigned char var_6 = (unsigned char)33;
int var_9 = -1170250858;
unsigned char var_11 = (unsigned char)22;
int zero = 0;
long long int var_12 = -5439027476779659489LL;
int var_13 = -82176681;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)53119;
short var_16 = (short)11731;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
