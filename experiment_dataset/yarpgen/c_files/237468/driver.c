#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5974980822520405994LL;
unsigned char var_5 = (unsigned char)37;
int var_8 = 267444958;
short var_11 = (short)26123;
unsigned int var_12 = 2177856730U;
unsigned short var_13 = (unsigned short)12622;
short var_19 = (short)22594;
int zero = 0;
unsigned long long int var_20 = 5777081013932421143ULL;
unsigned long long int var_21 = 11086783827278571373ULL;
_Bool var_22 = (_Bool)1;
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
