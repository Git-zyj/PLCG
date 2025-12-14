#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6468848385661370387ULL;
unsigned long long int var_3 = 9971154405833707267ULL;
short var_6 = (short)-9970;
_Bool var_8 = (_Bool)1;
unsigned char var_19 = (unsigned char)18;
int zero = 0;
unsigned int var_20 = 1155991160U;
signed char var_21 = (signed char)-126;
void init() {
}

void checksum() {
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
