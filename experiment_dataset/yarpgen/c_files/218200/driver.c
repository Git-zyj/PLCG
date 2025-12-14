#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)56;
unsigned short var_13 = (unsigned short)23686;
unsigned short var_14 = (unsigned short)32416;
int zero = 0;
long long int var_17 = -8863250364811754993LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)419;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
