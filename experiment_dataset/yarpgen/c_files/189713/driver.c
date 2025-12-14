#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 635903392;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-18912;
short var_8 = (short)-16855;
signed char var_9 = (signed char)-38;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)56764;
long long int var_13 = -3097924068647829751LL;
short var_14 = (short)10446;
int var_15 = -307553106;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
