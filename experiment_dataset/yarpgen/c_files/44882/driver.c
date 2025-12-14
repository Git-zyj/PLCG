#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 10225817124915145127ULL;
unsigned short var_5 = (unsigned short)34718;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)55221;
signed char var_13 = (signed char)-51;
int zero = 0;
short var_18 = (short)-28913;
unsigned short var_19 = (unsigned short)45629;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)31;
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
