#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)404;
unsigned long long int var_1 = 10938759790852168083ULL;
unsigned int var_5 = 2510779041U;
long long int var_7 = 5860782830733599418LL;
unsigned short var_9 = (unsigned short)45506;
int var_15 = -339762570;
unsigned char var_16 = (unsigned char)76;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-26;
short var_20 = (short)6037;
short var_21 = (short)25320;
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
