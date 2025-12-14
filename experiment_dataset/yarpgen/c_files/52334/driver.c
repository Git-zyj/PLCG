#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7244938022988247073LL;
long long int var_6 = 5166815024045602470LL;
short var_9 = (short)-13067;
signed char var_10 = (signed char)27;
signed char var_11 = (signed char)-14;
_Bool var_15 = (_Bool)0;
unsigned short var_18 = (unsigned short)3947;
int zero = 0;
long long int var_19 = -2793943745485381863LL;
signed char var_20 = (signed char)25;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
