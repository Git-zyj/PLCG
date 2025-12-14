#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1771276711U;
short var_12 = (short)32169;
signed char var_13 = (signed char)10;
short var_16 = (short)20495;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 6021143849021531916ULL;
unsigned short var_21 = (unsigned short)47075;
signed char var_22 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
