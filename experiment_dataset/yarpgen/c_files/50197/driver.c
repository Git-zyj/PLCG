#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2061;
signed char var_4 = (signed char)17;
unsigned short var_6 = (unsigned short)55186;
unsigned short var_9 = (unsigned short)49098;
int var_10 = 482480080;
int zero = 0;
short var_18 = (short)22405;
_Bool var_19 = (_Bool)0;
short var_20 = (short)12964;
unsigned long long int var_21 = 18252099953474215739ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
