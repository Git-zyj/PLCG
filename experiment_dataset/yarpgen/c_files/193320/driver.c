#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)-21833;
short var_11 = (short)15541;
unsigned char var_15 = (unsigned char)111;
int zero = 0;
int var_20 = -166723905;
signed char var_21 = (signed char)107;
unsigned long long int var_22 = 14325485667811885998ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
