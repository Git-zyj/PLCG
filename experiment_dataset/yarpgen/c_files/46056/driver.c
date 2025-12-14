#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12327298642408215857ULL;
short var_3 = (short)28641;
unsigned long long int var_4 = 6208447608152257349ULL;
signed char var_5 = (signed char)-47;
short var_6 = (short)-860;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 17005141157317244048ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 438476166U;
unsigned char var_15 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
