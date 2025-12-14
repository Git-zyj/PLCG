#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
_Bool var_3 = (_Bool)1;
long long int var_6 = 3568430038963307752LL;
int var_11 = -1024344131;
int zero = 0;
unsigned short var_15 = (unsigned short)55828;
unsigned short var_16 = (unsigned short)2129;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
