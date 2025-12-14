#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17670828117834006053ULL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)20496;
_Bool var_6 = (_Bool)0;
short var_7 = (short)13870;
long long int var_9 = -8598398743246590823LL;
signed char var_10 = (signed char)49;
int zero = 0;
unsigned char var_11 = (unsigned char)127;
unsigned int var_12 = 4087439970U;
signed char var_13 = (signed char)38;
void init() {
}

void checksum() {
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
