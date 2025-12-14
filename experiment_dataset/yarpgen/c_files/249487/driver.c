#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1422803579U;
unsigned int var_4 = 3413988997U;
_Bool var_8 = (_Bool)0;
short var_19 = (short)-23966;
int zero = 0;
unsigned short var_20 = (unsigned short)52610;
signed char var_21 = (signed char)50;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
