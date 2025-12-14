#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)61692;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4180893382470892372ULL;
int zero = 0;
unsigned int var_19 = 1266667607U;
signed char var_20 = (signed char)15;
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
