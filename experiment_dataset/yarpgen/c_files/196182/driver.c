#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2001337698U;
unsigned char var_1 = (unsigned char)32;
long long int var_2 = -3350193508094539482LL;
unsigned int var_5 = 2630302351U;
unsigned short var_9 = (unsigned short)50829;
int zero = 0;
unsigned char var_10 = (unsigned char)160;
_Bool var_11 = (_Bool)0;
int var_12 = -657654568;
unsigned char var_13 = (unsigned char)166;
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
