#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)-29;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)13423;
unsigned int var_11 = 406202581U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11162136750236940926ULL;
long long int var_14 = -2393834886218931233LL;
int zero = 0;
unsigned int var_16 = 2908451632U;
_Bool var_17 = (_Bool)0;
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
