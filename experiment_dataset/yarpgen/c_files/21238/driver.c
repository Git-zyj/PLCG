#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55248;
short var_4 = (short)-10452;
unsigned long long int var_7 = 5509589389006268200ULL;
_Bool var_11 = (_Bool)1;
int var_16 = -721028390;
int zero = 0;
short var_18 = (short)-19653;
short var_19 = (short)27401;
unsigned int var_20 = 2967441682U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
