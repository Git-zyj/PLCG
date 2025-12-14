#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-44;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)-99;
int zero = 0;
signed char var_19 = (signed char)-81;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)59;
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
