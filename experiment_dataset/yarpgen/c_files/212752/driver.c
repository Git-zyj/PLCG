#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)56;
_Bool var_7 = (_Bool)1;
signed char var_12 = (signed char)-74;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-93;
unsigned char var_20 = (unsigned char)127;
unsigned char var_21 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
