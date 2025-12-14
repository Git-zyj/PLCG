#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 922443286U;
unsigned int var_2 = 1711284682U;
long long int var_3 = 3587571120750880212LL;
long long int var_5 = -4388656024665590921LL;
long long int var_7 = 2283642792120593769LL;
unsigned char var_8 = (unsigned char)5;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-47;
long long int var_12 = -4026382330533296045LL;
short var_13 = (short)13738;
long long int var_14 = -743354861962300634LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
