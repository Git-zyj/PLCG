#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7091259941271528596LL;
unsigned short var_1 = (unsigned short)56550;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3909902413U;
long long int var_10 = -5944080792914006810LL;
unsigned short var_16 = (unsigned short)47847;
short var_17 = (short)10855;
int zero = 0;
signed char var_20 = (signed char)-25;
unsigned int var_21 = 3444741369U;
long long int var_22 = -1454437497224903850LL;
unsigned short var_23 = (unsigned short)23685;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
