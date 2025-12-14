#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 639583263709771670LL;
_Bool var_4 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)14858;
int zero = 0;
unsigned short var_19 = (unsigned short)55737;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-11610;
short var_22 = (short)-10378;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
