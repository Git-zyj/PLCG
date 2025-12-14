#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-39;
int var_3 = 52167859;
long long int var_4 = 5062123488287303723LL;
signed char var_5 = (signed char)116;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = 1959289057;
unsigned short var_13 = (unsigned short)15509;
int var_14 = 801503378;
short var_15 = (short)-2691;
long long int var_16 = 8145560258504311089LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
