#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1988840424;
unsigned char var_1 = (unsigned char)66;
unsigned char var_2 = (unsigned char)111;
int var_3 = 878805569;
unsigned char var_4 = (unsigned char)160;
short var_5 = (short)11457;
unsigned char var_8 = (unsigned char)162;
int zero = 0;
long long int var_12 = -6443159462154899543LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)23;
void init() {
}

void checksum() {
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
