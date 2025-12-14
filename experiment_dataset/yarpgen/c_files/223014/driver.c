#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3142659466U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-10;
signed char var_14 = (signed char)(-127 - 1);
unsigned char var_18 = (unsigned char)209;
long long int var_19 = -758934908458110677LL;
int zero = 0;
short var_20 = (short)-24378;
unsigned long long int var_21 = 16284735578624987707ULL;
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
