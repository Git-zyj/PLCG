#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5282776572011135340LL;
signed char var_4 = (signed char)101;
unsigned int var_6 = 2932144738U;
unsigned int var_7 = 281192057U;
int var_11 = -1731853264;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)6080;
unsigned short var_14 = (unsigned short)37662;
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
