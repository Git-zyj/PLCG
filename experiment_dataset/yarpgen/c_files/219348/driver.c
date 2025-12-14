#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-15650;
int var_4 = -936091405;
unsigned short var_10 = (unsigned short)10827;
unsigned char var_11 = (unsigned char)66;
unsigned int var_14 = 4294686675U;
signed char var_15 = (signed char)19;
short var_18 = (short)9441;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 651269019872399872ULL;
unsigned short var_22 = (unsigned short)31504;
unsigned short var_23 = (unsigned short)63505;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
