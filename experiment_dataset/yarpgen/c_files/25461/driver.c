#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1235270812338672084LL;
unsigned short var_4 = (unsigned short)8516;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)6261;
signed char var_9 = (signed char)26;
int zero = 0;
signed char var_13 = (signed char)-30;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-16140;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
