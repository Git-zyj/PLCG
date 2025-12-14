#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3071177457U;
signed char var_5 = (signed char)46;
short var_6 = (short)2908;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-31;
unsigned short var_20 = (unsigned short)14005;
signed char var_21 = (signed char)63;
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
