#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)89;
signed char var_6 = (signed char)42;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)21;
int zero = 0;
signed char var_19 = (signed char)-107;
signed char var_20 = (signed char)45;
signed char var_21 = (signed char)127;
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
