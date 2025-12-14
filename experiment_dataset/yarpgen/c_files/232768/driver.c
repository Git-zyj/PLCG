#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17018459882485617321ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)8496;
signed char var_10 = (signed char)-3;
int zero = 0;
signed char var_15 = (signed char)83;
short var_16 = (short)-28565;
void init() {
}

void checksum() {
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
