#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 700548081;
int var_3 = 2114210004;
unsigned int var_5 = 2807042904U;
unsigned int var_6 = 3143907316U;
unsigned int var_10 = 1372442844U;
int zero = 0;
short var_12 = (short)-31349;
_Bool var_13 = (_Bool)0;
short var_14 = (short)26771;
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
