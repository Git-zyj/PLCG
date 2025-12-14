#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)21214;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-654;
signed char var_7 = (signed char)-48;
int var_10 = -481320405;
int zero = 0;
long long int var_11 = -7905333770287488555LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
