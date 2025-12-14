#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3976801794U;
signed char var_3 = (signed char)-70;
signed char var_4 = (signed char)94;
signed char var_6 = (signed char)-115;
unsigned int var_7 = 1605302929U;
unsigned int var_12 = 3083179830U;
int zero = 0;
signed char var_14 = (signed char)-93;
signed char var_15 = (signed char)35;
signed char var_16 = (signed char)-123;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
