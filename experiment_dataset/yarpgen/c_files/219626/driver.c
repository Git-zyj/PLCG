#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
int var_2 = -1768108669;
int var_6 = 1918614051;
signed char var_9 = (signed char)-20;
unsigned int var_11 = 3088934939U;
signed char var_15 = (signed char)-2;
unsigned int var_18 = 256108790U;
int zero = 0;
unsigned int var_19 = 4213303878U;
int var_20 = -1199485702;
signed char var_21 = (signed char)39;
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
