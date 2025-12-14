#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12245843168987955120ULL;
int var_8 = 1107756155;
signed char var_9 = (signed char)-127;
int var_10 = 2015969143;
unsigned int var_12 = 3245264673U;
int var_15 = -1666924430;
int var_18 = -338602067;
int zero = 0;
long long int var_20 = -8908386803601523627LL;
signed char var_21 = (signed char)-46;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)2;
unsigned short var_24 = (unsigned short)26845;
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
