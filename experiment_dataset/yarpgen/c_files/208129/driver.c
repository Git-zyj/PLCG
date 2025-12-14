#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12198233629418583011ULL;
signed char var_4 = (signed char)-44;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 879041935U;
unsigned short var_14 = (unsigned short)47415;
int zero = 0;
short var_16 = (short)-18632;
unsigned int var_17 = 1808450168U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
