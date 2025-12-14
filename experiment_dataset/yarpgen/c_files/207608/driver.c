#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-13;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)93;
signed char var_14 = (signed char)-55;
int zero = 0;
signed char var_17 = (signed char)90;
unsigned short var_18 = (unsigned short)11207;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
