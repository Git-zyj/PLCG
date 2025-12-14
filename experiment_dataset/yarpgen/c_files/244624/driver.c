#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned long long int var_3 = 6023429144601143376ULL;
unsigned char var_4 = (unsigned char)71;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 976114606U;
signed char var_14 = (signed char)-48;
short var_18 = (short)-13108;
int zero = 0;
short var_19 = (short)-28237;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
