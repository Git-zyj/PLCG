#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-58;
signed char var_4 = (signed char)9;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)35;
signed char var_8 = (signed char)-76;
int var_9 = 1551850848;
signed char var_12 = (signed char)-23;
unsigned char var_14 = (unsigned char)58;
signed char var_15 = (signed char)32;
int zero = 0;
int var_16 = 95196665;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
