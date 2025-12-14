#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
signed char var_7 = (signed char)-101;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)74;
signed char var_17 = (signed char)-67;
signed char var_19 = (signed char)99;
int zero = 0;
signed char var_20 = (signed char)31;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
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
