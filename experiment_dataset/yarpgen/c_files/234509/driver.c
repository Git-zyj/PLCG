#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17163959595558222431ULL;
short var_2 = (short)8707;
unsigned short var_7 = (unsigned short)34014;
signed char var_14 = (signed char)59;
int zero = 0;
signed char var_16 = (signed char)90;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
