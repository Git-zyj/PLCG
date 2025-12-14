#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57745;
short var_2 = (short)-26071;
short var_3 = (short)-11989;
signed char var_5 = (signed char)-80;
long long int var_6 = -3507498186632059545LL;
short var_12 = (short)-11335;
short var_13 = (short)9759;
long long int var_14 = -8181536862968274272LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
