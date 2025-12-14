#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
unsigned int var_1 = 1577933255U;
int var_2 = 624391105;
unsigned short var_3 = (unsigned short)4578;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)52;
signed char var_7 = (signed char)6;
int zero = 0;
long long int var_13 = -1279171370612965247LL;
int var_14 = 897702804;
void init() {
}

void checksum() {
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
