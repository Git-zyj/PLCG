#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 371295597799746674ULL;
unsigned int var_7 = 2299121323U;
int var_10 = -1734088696;
_Bool var_15 = (_Bool)0;
int var_16 = 1924453520;
int zero = 0;
int var_18 = 418056943;
short var_19 = (short)13434;
unsigned char var_20 = (unsigned char)207;
signed char var_21 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
