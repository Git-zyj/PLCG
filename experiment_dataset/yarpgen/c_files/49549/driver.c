#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned char var_6 = (unsigned char)157;
long long int var_9 = 2211950913105757861LL;
int zero = 0;
short var_11 = (short)-2441;
signed char var_12 = (signed char)-31;
long long int var_13 = 7143969693855482930LL;
unsigned char var_14 = (unsigned char)159;
signed char var_15 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
