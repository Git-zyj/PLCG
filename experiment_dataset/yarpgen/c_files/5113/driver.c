#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-101;
unsigned short var_5 = (unsigned short)59031;
unsigned long long int var_6 = 991306350461168499ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2084550607U;
signed char var_20 = (signed char)-87;
unsigned short var_21 = (unsigned short)45553;
void init() {
}

void checksum() {
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
