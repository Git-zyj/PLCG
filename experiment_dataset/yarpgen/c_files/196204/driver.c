#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15275;
signed char var_2 = (signed char)-37;
unsigned int var_4 = 2123499969U;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)62;
unsigned int var_11 = 2904087100U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_16 = (short)-12385;
unsigned short var_17 = (unsigned short)37397;
unsigned int var_18 = 300909031U;
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
