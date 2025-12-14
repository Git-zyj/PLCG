#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)27059;
unsigned int var_3 = 3183564884U;
unsigned char var_4 = (unsigned char)101;
long long int var_5 = 2129169994983151158LL;
long long int var_6 = -95938511248001229LL;
unsigned short var_8 = (unsigned short)25173;
int var_9 = 1735225256;
int zero = 0;
signed char var_10 = (signed char)91;
int var_11 = 2072018891;
int var_12 = 1047372507;
unsigned int var_13 = 3598765668U;
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
