#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-123;
signed char var_9 = (signed char)76;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
