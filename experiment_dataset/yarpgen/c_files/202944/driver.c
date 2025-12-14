#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -763476394;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)231;
short var_9 = (short)8125;
int zero = 0;
long long int var_10 = -3317734002117853804LL;
unsigned int var_11 = 3779946121U;
signed char var_12 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
