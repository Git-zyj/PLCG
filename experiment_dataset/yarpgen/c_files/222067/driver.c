#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -897673524989289932LL;
unsigned short var_6 = (unsigned short)7377;
unsigned short var_7 = (unsigned short)53323;
short var_8 = (short)-29297;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-98;
signed char var_11 = (signed char)79;
_Bool var_12 = (_Bool)0;
short var_13 = (short)4935;
unsigned short var_14 = (unsigned short)45165;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
