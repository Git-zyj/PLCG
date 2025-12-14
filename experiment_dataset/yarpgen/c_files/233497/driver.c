#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)148;
short var_4 = (short)6069;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)64;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)118;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1596651845;
_Bool var_21 = (_Bool)1;
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
