#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-28258;
signed char var_8 = (signed char)-117;
unsigned short var_9 = (unsigned short)6870;
unsigned long long int var_10 = 3565571431951363359ULL;
int var_11 = 1259148197;
int zero = 0;
long long int var_12 = -7909241409233513388LL;
unsigned int var_13 = 2289711070U;
int var_14 = 731680695;
void init() {
}

void checksum() {
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
