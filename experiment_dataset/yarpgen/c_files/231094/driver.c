#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3745;
int var_4 = 1796035757;
_Bool var_5 = (_Bool)1;
unsigned char var_12 = (unsigned char)8;
int zero = 0;
signed char var_18 = (signed char)-101;
long long int var_19 = -4820357368673937141LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
