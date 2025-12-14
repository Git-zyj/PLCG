#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1560146189U;
unsigned int var_1 = 3140767083U;
signed char var_4 = (signed char)-125;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)4;
unsigned char var_9 = (unsigned char)67;
int zero = 0;
unsigned short var_12 = (unsigned short)43921;
signed char var_13 = (signed char)76;
signed char var_14 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
