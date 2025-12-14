#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3119924156362943166LL;
unsigned short var_2 = (unsigned short)58695;
unsigned long long int var_3 = 14962289739586676746ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)148;
unsigned short var_8 = (unsigned short)59894;
short var_9 = (short)745;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -497784189363875132LL;
signed char var_12 = (signed char)-5;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)41032;
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
