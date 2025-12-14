#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8492868278221507128LL;
signed char var_4 = (signed char)-7;
int var_9 = 1691612055;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 3787685939U;
unsigned long long int var_14 = 17409738087716401534ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)42;
unsigned char var_21 = (unsigned char)175;
void init() {
}

void checksum() {
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
