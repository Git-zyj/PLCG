#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)251;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 532289672874704761ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)180;
unsigned char var_20 = (unsigned char)104;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)171;
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
